#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sound.loadSound("This Juan's for the L'80s.wav");
    sound.setLoop(true);
    sound.play();
    
    //how many bands do we want to get volume for?
    nBandsToGet = 128;
    
    //assign is a way of setting up a vector with a specific amount of one value
    fftSmoothed.assign(nBandsToGet, 0.0);
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    //float * fft creates an array
    float * fft = ofSoundGetSpectrum(nBandsToGet);
   
    // ARRAY: fft[131] = 0.5  go into other memory
    // VECTOR: fftSmoothed[131] EXC_BAD_ACCESS
//    convert array to vector
//    vector<float> fftVector;
//    fftVector.assign(fft, fft + nBandsToGet);

    
    for (int i = 0;i < nBandsToGet; i++){
        
        // let the smoothed value sink to zero:
        fftSmoothed[i] *= 0.9f;
        
        // take the max, either the smoothed or the incoming:
        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    float width = ofGetWidth() / nBandsToGet;
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

}
