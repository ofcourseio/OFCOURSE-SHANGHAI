#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofColor col;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,255);

    drawMyShape(100,100,200,300);
    drawMyShape(300,100,260,250);
    drawMyShape(100,600,150,350);
    
}

//--------------------------------------------------------------
void ofApp::drawMyShape(int x, int y){
    //a tree
    ofBeginShape();
    ofVertex(x + 0, y + 0);
    ofVertex(x + 20, y + 248 - 248);
    ofVertex(x + 20, y + 328 - 248);
    ofVertex(x + 612 - 502, y + 328 - 248);
    ofVertex(x + 612 - 502, y + 348 - 248);
    ofVertex(x + 522 - 502, y + 348 - 248);
    ofVertex(x + 612 - 502, y + 448 - 248);
    ofVertex(x + 592 - 502, y + 448 - 248);
    ofVertex(x + 512 - 502, y + 358 - 248);
    ofVertex(x + 422 - 502, y + 448 - 248);
    ofVertex(x + 402 - 502, y + 448 - 248);
    ofVertex(x + 502 - 502, y + 348 - 248);
    ofVertex(x + 402 - 502, y + 348 - 248);
    ofVertex(x + 402 - 502, y + 328 - 248);
    ofVertex(x + 502 - 502, y + 328 - 248);
    ofVertex(x + 502 - 502, y + 248 - 248);
    ofEndShape();
}

//--------------------------------------------------------------
void ofApp::drawMyShape(int x, int y, int width, int height){
    
    ofBeginShape();
    ofVertex(x + 0, y + 0); //top left
    ofVertex(x + width, y + 0); //top right
    ofVertex(x + width, y + height); //bottom right
    ofVertex(x + 0, y + height); //bottom left
    ofVertex(x + 0, y + 0); // first point again.
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
