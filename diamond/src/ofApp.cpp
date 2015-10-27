#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    drawDiamond(ofGetWidth()/2, ofGetHeight()/2, 100, mouseY);
    
    ofSetColor(255);
    drawDiamond(mouseX, mouseY, 100, 200);
}

//--------------------------------------------------------------
void ofApp::drawDiamond(float centerX, float centerY, float kwan, float gao){

    ofBeginShape();
    ofVertex(centerX, centerY - gao/2);
    ofVertex(centerX+ kwan/3, centerY - gao/3);
    ofVertex(centerX + kwan/2, centerY);
    ofVertex(centerX, centerY + gao/2);
    ofVertex(centerX - kwan/2, centerY);
    ofVertex(centerX, centerY - gao/2);
    ofEndShape();
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
