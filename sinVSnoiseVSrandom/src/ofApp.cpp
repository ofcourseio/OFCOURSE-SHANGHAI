#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int numPoints = 200;
    float length = ofGetWidth() / numPoints;
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.9);
    
    
   
    ofSetColor(0);
    ofNoFill();
    
    
    //sine wave
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float y = ofGetHeight() / 4 + sin(i*scale) * 50;
        ofVertex(x, y);
    }
    ofEndShape();

    
    //smoothed noise
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float y = ofGetHeight() / 4 * 2 + ofSignedNoise(i*scale) * 100;
        ofVertex(x, y);
    }
    ofEndShape();

    
    //random
    ofSeedRandom(scale*100);
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float y = ofGetHeight() / 4 * 3 + ofRandomuf() * 100;
        ofVertex(x, y);
    }
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
