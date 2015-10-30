#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
//    ofSetBackgroundAuto(false);
    
    for (int i = 0; i < 100; i++){
        particle myParticle;
        myParticle.setup();
        particleSystem.push_back(myParticle);
    }


}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particleSystem.size(); i++){
        particleSystem[i].update();
//        particleSystem[i].bounceOfWalls();
        particleSystem[i].wrapAround();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < particleSystem.size(); i++){
        particleSystem[i].draw();
    }

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
    for (int i = 0; i < particleSystem.size(); i++){
        particleSystem[i].pos.set(x, y);
    }
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
