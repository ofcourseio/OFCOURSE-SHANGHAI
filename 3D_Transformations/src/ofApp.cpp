#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    ofDisableArbTex();
    
    light.setDiffuseColor(ofFloatColor(1.0,1.0,1.0));
    light.setSpecularColor(ofFloatColor(1.0,1.0,1.0));
    light.setPosition(200, 0, 0);
    light.enable();
    
    rotation = 0;
    
    bricks.loadImage("Worn Brown Brickwork.jpg");
    
    cam.setDistance(1000);
}

//--------------------------------------------------------------
void ofApp::update(){
    rotation = rotation + 1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    cam.begin();
    
    ofEnableLighting();
    
    ofPushMatrix();

    ofTranslate(200, 0, 0);
    ofRotateZ(rotation);
//    ofScale(3, 1, 1);
    
    bricks.bind();
    ofDrawBox(50);
    
    ofPopMatrix();
    
//    ofDrawSphere(50);
//    ofDrawCylinder(50, 50);
    bricks.unbind();
    
    
    ofCircle(0,0, 100);
    ofDisableLighting();
    
    ofDrawAxis(200);
    cam.end();
    
    ofDrawBox(50);
    

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
