#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myVideo.loadMovie("gondola.mov");
    myVideo.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    myVideo.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    myVideo.draw(0,0);
    
    //color
    if (mouseX < myVideo.width && mouseY < myVideo.height) {
        ofPixels videoPixels = myVideo.getPixelsRef();
        pixelColor = videoPixels.getColor(mouseX, mouseY);
    }
    ofSetColor(pixelColor);
    ofCircle(mouseX, mouseY, 50);
    
    
    //rect
    float x = 100;
    float width = ofGetWidth() - x * 2;
    float height = 30;
    float y = myVideo.height + 30;
    
    ofSetColor(0);
    ofRect(x, y - height/2, width, height);
    
    //circle
    float circleX = 100 + myVideo.getPosition() * width;
    
    ofSetColor(255);
    ofCircle(circleX, y, 25);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'p'){
        if (myVideo.isPlaying()) {
            myVideo.stop();
        }
        else {
            myVideo.play();
        }
    }
    
    if (key == 'f') {
        myVideo.setFrame(0);
    }
    
    if (key == OF_KEY_LEFT) {
        int prevFrame = myVideo.getCurrentFrame() - 1;
        myVideo.setFrame(prevFrame);
    }
    
    if (key == OF_KEY_RIGHT) {
        int nextFrame = myVideo.getCurrentFrame() + 1;
        myVideo.setFrame(nextFrame);
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
    float speed = ofMap(x, 0, ofGetWidth(), -4, 4);
    myVideo.setSpeed(speed);
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
