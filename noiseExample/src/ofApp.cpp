#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200, 0, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int numCircles = 50;
    float circleDiameter = ofGetWidth() / numCircles;
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.9);
    
    
    //ofNoise controls y
    ofSetColor(0);
    for (int i = 0; i < numCircles; i++) {
        float x = (i+1) * circleDiameter;
        float y = ofGetHeight() / 4 - ofNoise(i*scale) * 200;
        float radius = circleDiameter / 2;
        ofCircle(x, y, radius);
    }
    
    //ofNoise controls radius
    ofSetColor(0);
    for (int i = 0; i < numCircles; i++) {
        float x = (i+1) * circleDiameter;
        float y = ofGetHeight() / 4 * 2;
        float radius = circleDiameter * ofNoise(i*scale);
        ofCircle(x, y, radius);
    }
    
    //ofNoise controls color
    for (int i = 0; i < numCircles; i++) {
        float x = (i+1) * circleDiameter;
        float y = ofGetHeight() / 4 * 3;
        float radius = circleDiameter / 2;
        ofSetColor(ofNoise(i*scale)*255);
        ofCircle(x, y, radius);
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
