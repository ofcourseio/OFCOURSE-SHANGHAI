#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int numPoints = 400;
    float length = ofGetWidth() / float(numPoints);
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.5);
    
    
   
    ofSetColor(0);
    ofNoFill();
    
    
    //sine wave
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float yPos = ofGetHeight() / 4;
        float wave = sin(i*scale) * 50;
        float y = yPos + wave;
        ofVertex(x, y);
    }
    ofEndShape();

    
    //smoothed noise
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float yPos = ofGetHeight() / 4 * 2;
        float wave = ofSignedNoise(i*scale) * 100;
        float y = yPos + wave;
        ofVertex(x, y);
    }
    ofEndShape();

    
    //random
    ofSeedRandom(scale*100);
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        float x = (i+1) * length;
        float yPos = ofGetHeight() / 4 * 3;
        float wave = ofRandomuf() * 100;
        float y = yPos + wave;
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
