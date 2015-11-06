#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    duration = 1;
    timer = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    if (playAnimation) {
        timer = ofGetElapsedTimef() - startTime;
        if (timer > duration){
            playAnimation = false;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (playAnimation) {
        float radius = ofMap(timer, 0, duration, 10, 50);
        ofCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' ') {
        playAnimation = true;
        startTime = ofGetElapsedTimef();
    }
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
