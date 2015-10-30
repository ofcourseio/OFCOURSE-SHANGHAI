#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    xOffset1 = 55;
//    xOffset2 = 101;
//    xOffset3 = -57;
    
    
    //ho tway
//    xOffset.push_back(55);
//    xOffset.push_back(101);
//    xOffset.push_back(-57);
//    
//    yOffset.push_back(-47);
//    yOffset.push_back(117);
//    yOffset.push_back(35);
    
    
    int numCircles = 3000;
    
    for (int i = 0; i < numCircles; i++){
        xOffset.push_back(ofRandom(-500, 500));
        yOffset.push_back(ofRandom(-300, 300));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < xOffset.size(); i++){
        xOffset[i] += i/10;
        yOffset[i] += i/10;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    for (int i = 0; i < xOffset.size(); i++){
        ofCircle(mouseX + xOffset[i], mouseY + yOffset[i], 10);
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
