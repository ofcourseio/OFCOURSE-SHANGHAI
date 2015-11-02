#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    GBK.loadFont("GBK.ttf",36);
    happyFish.loadImage("happyFish.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    
    string myString = "谢谢 朋友\n谢谢 朋友";
    
    
    float width = GBK.stringWidth(myString);
    float height = GBK.stringHeight(myString);
    
    ofNoFill();
//    ofRect(mouseX, mouseY - height, width, height);
    
    
    ofRectangle stringRect = GBK.getStringBoundingBox(myString, ofGetWidth()/2, ofGetHeight()/2);
//
    ofRect(stringRect);
    
    if (stringRect.inside(mouseX, mouseY)){
        ofSetColor(255);
        happyFish.draw(stringRect);
    }
    
        ofSetColor(0);
        GBK.drawString(myString, ofGetWidth()/2, ofGetHeight()/2);
    
    
    
    
    
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
