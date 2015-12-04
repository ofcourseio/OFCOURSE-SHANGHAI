#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    renderer.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    renderer.beginTiming();
}

//--------------------------------------------------------------
void ofApp::draw(){
    renderer.begin();
    
    ofBackground(ofNoise(renderer.getElapsedTimef()* 0.2)*255, ofNoise(renderer.getElapsedTimef()* 0.21)*255, ofNoise(renderer.getElapsedTimef()* 0.21)*255);
    for (int i = 0; i < 25; i++) {
        float r = ofNoise(i*(1.0/25.0), renderer.getElapsedTimef() * 0.2) * 255;
        float g = ofNoise(i*(1.0/15.0), renderer.getElapsedTimef() * 0.2) * 255;
        float b = ofNoise(i*(1.0/5.0), renderer.getElapsedTimef() * 0.2) * 255;
        ofSetColor(r,g,b);
        
        float x = ofNoise(i*i*(1.0/25.0), renderer.getElapsedTimef() * 0.2) * ofGetWidth();
        float y = ofNoise((i+1)*(i+1)*(1.0/25.0), -renderer.getElapsedTimef() * 0.1) * ofGetHeight();
        ofCircle(x, y, ofNoise(renderer.getElapsedTimef() * 0.2)*50);
    }
    
    renderer.end();
    renderer.endTiming();

    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'r') {
        renderer.startRendering();
    }
    
    if (key == 's') {
        renderer.stopRendering();
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
