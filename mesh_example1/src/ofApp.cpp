#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    img.loadImage("HappyFish.jpg");
    float w = img.width;
    float h = img.height;
    
    mesh.clear();
    
    mesh.addVertex(ofPoint(0,0));
    mesh.addTexCoord(ofVec2f(0,0));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));

    
    mesh.addVertex(ofPoint(w,0));
    mesh.addTexCoord(ofVec2f(w,0));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));
    
    mesh.addVertex(ofPoint(w,h));
    mesh.addTexCoord(ofVec2f(w,h));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));
    
    mesh.addVertex(ofPoint(0,0));
    mesh.addTexCoord(ofVec2f(0,0));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));
    
    mesh.addVertex(ofPoint(0,h));
    mesh.addTexCoord(ofVec2f(0,h));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));
    
    mesh.addVertex(ofPoint(w,h));
    mesh.addTexCoord(ofVec2f(w,h));
    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));

    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    cam.setDistance(500);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    img.bind();
    mesh.draw();
    img.unbind();
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
//    mesh.addVertex(ofPoint(x,y));
//    mesh.addColor(ofFloatColor(ofRandomuf(),ofRandomuf(),ofRandomuf()));
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
