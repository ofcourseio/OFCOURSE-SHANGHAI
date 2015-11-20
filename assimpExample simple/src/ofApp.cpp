#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofBackground(50, 0);

    ofDisableArbTex(); // we need GL_TEXTURE_2D for our models coords.

    model.loadModel("astroBoy_walk.dae", true);
}

//--------------------------------------------------------------
void ofApp::update(){
    model.update();
    shader.load("shader");
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    
	ofEnableDepthTest();

    cam.begin();
    
    shader.begin();
    shader.setUniform1f("width", ofGetWidth());
    shader.setUniform1f("height", ofGetHeight());
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniform2f("mouse", mouseX,  ofGetHeight() - mouseY);
    model.drawFaces();
    shader.end();
    
    cam.end();
    
    ofDisableDepthTest();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    //
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

