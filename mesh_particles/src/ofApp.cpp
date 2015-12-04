#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(25);
    ofSetColor(255);
    
    for (int i = 0; i < 10000; i++) {
        pos.push_back(ofPoint(0,0,0));
        vel.push_back(ofPoint(ofRandomf(), ofRandomf(), ofRandomf()));
    }
    
    particleMesh.setMode(OF_PRIMITIVE_POINTS);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < pos.size(); i++) {
        pos[i] += vel[i];
    }
    
    particleMesh.clear();
    
    for (int i = 0; i < pos.size(); i++) {
        particleMesh.addVertex(pos[i]);
    }
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    particleMesh.draw();
    cam.end();
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
