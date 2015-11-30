#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    
    fbo.begin();
    ofClear(0,255);
    fbo.end();

    feedback.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    
    feedback.begin();
    ofClear(0,255);
    feedback.end();

    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    
    //-------main fbo-------
    fbo.begin();
    
    //draw stretched feedback fbo into mainfbo
    ofSetColor(255);
    feedback.draw(-2,-2,ofGetWidth()+4, ofGetHeight()+4);
    
    //draw some stuff ontop of stretched feedback fbo
    ofSetColor(255);
    ofCircle(mouseX,mouseY,25);
    
    fbo.end();
    
    //-------feedback fbo--------
    feedback.begin();
    
    //draw main fbo into feedback fbo. change color to change amount of feedback
    ofSetColor(254);
    fbo.draw(0,0);
    
    feedback.end();
    
    //-------draw main fbo------
    fbo.draw(0,0);
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
