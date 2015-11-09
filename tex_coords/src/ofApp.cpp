#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.initGrabber(320, 240);
    sphere.set(100, 25);
//    sphere.mapTexCoordsFromTexture(grabber.getTextureReference());
    
    sphere.mapTexCoords(150, 240, 170, 0);
    
    ofEnableDepthTest();
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
//    plane.set(320, 240);
//    plane.mapTexCoords(150, 240, 170, 0);
    
    
//    plane.mapTexCoordsFromTexture(grabber.getTextureReference());
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    grabber.draw(0,0);
    
    cam.begin();
    
    grabber.getTextureReference().bind();
//    plane.draw();
    sphere.draw();
    grabber.getTextureReference().bind();
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
