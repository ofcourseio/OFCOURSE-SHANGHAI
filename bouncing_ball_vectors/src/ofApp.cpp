#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for (int i = 0; i < 10; i++){
        ofPoint randomPos;
        randomPos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        pos.push_back(randomPos);
        
        ofPoint randomVel;
        randomVel.set(ofRandomuf()*4, ofRandomuf()*4);
        vel.push_back(randomVel);
        
        radius.push_back(ofRandom(10,25));
    }
    
    ofSetColor(255,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < 10; i++){
        pos[i] += vel[i];
        
        if (pos[i].x + radius[i] > ofGetWidth() || pos[i].x - radius[i] < 0) {
            vel[i].x *= -1;
        }
        
        if (pos[i].y + radius[i] > ofGetHeight() || pos[i].y - radius[i] < 0) {
            vel[i].y *= -1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < 10; i++){
        ofCircle(pos[i], radius[i]);
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
