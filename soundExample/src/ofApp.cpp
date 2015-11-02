#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySound.loadSound("loop.wav");
    mySound.setLoop(true);
 
    mySound.setSpeed(0.5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'p') {
        mySound.play();
    }
    
    if (key == 's') {
        mySound.stop();
    }
    
    if (key == 'P') {
        mySound.setPaused(true);
    }
    
    if (key == 'U') {
        mySound.setPaused(false);
    }
    
    if(key == 'r'){
        mySound.setSpeed(-1);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    float pan = ofMap(mouseX, 0, ofGetWidth(), -1, 1);
    mySound.setPan(pan);
    
//    float speed = ofMap(mouseY,
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    float vol = ofMap(mouseY, ofGetHeight(), 0, 0, 1);
    mySound.setVolume(vol);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    mySound.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
//    mySound.stop();
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
