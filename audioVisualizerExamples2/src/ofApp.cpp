#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    filename = "no file loaded";
    
    //how many bands do we want to get volume for?
    nBandsToGet = 2;
    
    //assign is a way of setting up a vector with a specific amount of one value
    fftSmoothed.assign(nBandsToGet, 0.0);
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    //float * fft creates an array
    float * fft = ofSoundGetSpectrum(nBandsToGet);
    
    for (int i = 0;i < nBandsToGet; i++){
        
        // let the smoothed value sink to zero:
        fftSmoothed[i] *= 0.90f;
        
        // take the max, either the smoothed or the incoming:
        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    
    float stringLength = filename.length() * 8;
    float padding = 20;
    ofDrawBitmapString(filename, ofGetWidth() - stringLength - padding, padding);
    
    float width = ofGetWidth() / (float)nBandsToGet;
    for (int i = 0;i < nBandsToGet; i++){
        float x = i * width;
        float height = fftSmoothed[i] * ofGetHeight()/2;
        float y = ofGetHeight() - height;
        ofRect(x, y, width, height);
    }
    
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
