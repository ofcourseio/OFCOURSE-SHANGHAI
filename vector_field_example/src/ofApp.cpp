#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    vel.set(0,0);
    acc.set(0,0);
    
    ofBackground(25);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofVec2f center(ofGetWidth()/2, ofGetHeight()/2);
    ofVec2f vec = center - pos;
    vec.normalize();
    float angle = ofSignedNoise(pos.x*0.01,pos.y*0.01) * 30;
    vec.rotate(angle);
    acc = vec;
    
    vel += acc;
    pos += vel;
    
    vel *= 0.9;
    
    cout << vel << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    int numRows = 12;
    int numCols = 20;
    
    float xinc = ofGetWidth() / numCols;
    float yinc = ofGetHeight() / numRows;
    
    ofSetColor(200);
    for (float x = 0; x < ofGetWidth(); x+=xinc){
        for (float y = 0; y < ofGetHeight(); y+=yinc){
            ofVec2f center(ofGetWidth()/2, ofGetHeight()/2);
            ofVec2f pos(x,y);
            ofVec2f vec = pos - center;
            vec.normalize();
            float angle = ofSignedNoise(x*0.01,y*0.01) * 30;
            vec.rotate(angle);
            
            ofLine(pos - vec * 10, pos + vec * 10);
        }
    }
    
    ofSetColor(255);
    ofNoFill();
    ofCircle(pos, 15);
    ofLine(pos, pos+vel*15);
    

    

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
    pos.set(x,y);
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
