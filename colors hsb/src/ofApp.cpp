#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    barColor.set(0,0,255);
    circle1Color.set(23);
    circle2Color.set(255, 67, 23);
    circle3Color.set(23, 134, 45);
    circle4Color.set(23, 145, 57);
    circle5Color.set(23, 127);
    circle6Color.set(23, 134, 45);
    circle7Color.set(23, 145, 57, 127);
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    circle1Color.r = float(mouseX) / ofGetWidth() * 255;
    circle1Color.r = ofMap(mouseX,  0, ofGetWidth(),  0, 255);
    circle1Color.g = ofMap(mouseX,  0, ofGetWidth(),  0, 23);
    circle1Color.b = ofMap(mouseX,  0, ofGetWidth(),  0, 145);
    
    //fade between two colors
    circle4Color.r = ofMap(mouseY,  0, ofGetHeight(),  circle2Color.r, circle3Color.r);
    circle4Color.g = ofMap(mouseY,  0, ofGetHeight(),  circle2Color.g, circle3Color.g);
    circle4Color.b = ofMap(mouseY,  0, ofGetHeight(),  circle2Color.b, circle3Color.b);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //a blue bar underneath the circles to demonstrate alpha
    
    ofFill();
    ofSetColor(barColor);
    ofRect(0, 374, ofGetWidth(), 20);
    
    
    
    //Drawfilled Circle
    ofSetColor(circle1Color); //one value: brightness
    ofCircle(50, 384, 50);
    
    //draw outline in different color
    ofNoFill();
    ofSetColor(255,0,0); //one value: brightness
    ofCircle(50, 384, 50);
    
    
    
    
    ofFill();
    ofSetColor(circle2Color); //two values: brightness and alpha
    ofCircle(200, 384, 50);
    
    ofSetColor(circle3Color); //three values: red, green, blue
    ofCircle(350, 384, 50);
    
    ofSetColor(circle4Color); //four values: red, green, blue, alpha
    ofCircle(500, 384, 50);
    
    ofSetColor(circle5Color); //0x followed by one hexadecimal value like in web dev
    ofCircle(650, 384, 50);
    
    ofSetColor(circle6Color); //ofColor:: followed by the name of a color
    ofCircle(800, 384, 50);
    
    ofSetColor(circle7Color);
    ofCircle(950, 384, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'r') {
        barColor.r = barColor.r + 2;
    }
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
