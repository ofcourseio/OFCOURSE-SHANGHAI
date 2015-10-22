#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //a blue bar underneath the circles to demonstrate alpha
    ofSetColor(0,0,255);
    ofRect(0, 374, ofGetWidth(), 20);
    
    //using ofsetColor with raw numbers
    ofSetColor(0); //one value: brightness
    ofCircle(50, 384, 50);
    
    ofSetColor(0, 127); //two values: brightness and alpha
    ofCircle(200, 384, 50);
    
    ofSetColor(255, 124, 23); //three values: red, green, blue
    ofCircle(350, 384, 50);
    
    ofSetColor(255, 124, 23, 200); //four values: red, green, blue, alpha
    ofCircle(500, 384, 50);
    
    ofSetHexColor(0xddffee); //0x followed by one hexadecimal value like in web dev
    ofCircle(650, 384, 50);
    
    ofSetColor(ofColor::chocolate); //ofColor:: followed by the name of a color
    ofCircle(800, 384, 50);
    
    
    //advanced. Using an ofColor variable allows more possibility
    ofColor myColor;
    
    myColor.setSaturation(200); //saturation is how "colorful" it is
    myColor.setBrightness(123); //brightness...
    myColor.setHue(230); //hue choose which color of the rainbow
    ofSetColor(myColor);
    ofCircle(950, 384, 50);
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
