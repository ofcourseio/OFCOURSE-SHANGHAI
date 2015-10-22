#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    //x of topleft corner, y of topleft corner, width, height
    ofRect(200, 234, 150, 100);
    
    //x and y of the center, radius
    ofCircle(512, 284, 50);
    
    //x1,y1,x2,y2,x3,y3
    ofTriangle(700, 234, 750, 314, 650, 314);
    
    ofNoFill();
    ofRect(200, 434, 150, 100);
    ofCircle(512, 484, 50);
    ofTriangle(700, 434, 750, 514, 650, 514);
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
