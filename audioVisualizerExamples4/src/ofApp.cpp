#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    filename = "no file loaded";
    
    //how many bands do we want to get volume for?
    nBandsToGet = 1024;
    
    //assign is a way of setting up a vector with a specific amount of one value
    fftSmoothed.assign(nBandsToGet, 0.0);
    
    //allocate an image to hold the values of the fft
    fftImage.allocate(nBandsToGet, 1, OF_IMAGE_COLOR);
    
    fftShader.load("fftShader");
    
    //setup up our plane so we can texture it with our shader
    plane.set(ofGetWidth(), ofGetHeight(), 2, 2);
    plane.mapTexCoords(0.0, 0.0, ofGetWidth(), ofGetHeight());
    
    
    //setup parameters
    decay.set("decay", 0.9, 0.5, 0.999);
    scale.set("scale", 1.0, 1.0, 10.0);
    
    //GUI
    gui.setup();
    gui.add(decay);
    gui.add(scale);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    fftShader.load("fftShader");
    
    //float * fft creates an array
    float * fft = ofSoundGetSpectrum(nBandsToGet);
    
    for (int i = 0; i < nBandsToGet; i++){
        
        // let the smoothed value sink to zero:
        fftSmoothed[i] *= decay;
        
        // take the max, either the smoothed or the incoming:
        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
        
        //set the pixel in the fftImage to the value of fftSmoothed
        fftImage.setColor(i, 0, ofFloatColor(fftSmoothed[i]));
    }
    
    
    //update the image: this sends the pixels we just changed to a texture where the shader can access them
    fftImage.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    //shader
    fftShader.begin();
    fftShader.setUniformTexture("fftTex", fftImage.getTextureReference(), 0);
    fftShader.setUniform2f("windowSize", ofGetWidth(), ofGetHeight());
    fftShader.setUniform1f("scale", scale);

    //plane.draw() centers the plane on 0,0 so we need to translate it to the center
    ofPushMatrix();
    ofTranslate(plane.getWidth()/2, plane.getHeight()/2);
    plane.draw();
    ofPopMatrix();
    
    fftShader.end();
    
    
    //filename
    float stringLength = filename.length() * 8;
    float padding = 20;
    ofDrawBitmapString(filename, ofGetWidth() - stringLength - padding, padding);

    //gui
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    filename = dragInfo.files[0];
    
    sound.stop();
    sound.unloadSound();
    sound.loadSound(filename);
    sound.setLoop(true);
    sound.play();
}
