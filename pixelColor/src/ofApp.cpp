#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.loadMovie("fingers.mov");
    video.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    float width = ofGetWidth() / (float)video.width;
    float height = ofGetHeight() / (float)video.height;
    ofPixels videoPixels = video.getPixelsRef();
    
    int step = 5;
    
//    for (int x = 0; x < video.width; x+=step){
//        for (int y = 0; y < video.height; y+=step){
//            ofSetColor(videoPixels.getColor(x, y));
//            float radius = height/2 * step;
//            ofCircle(x * width, y * height, radius);
//        }
//    }
//    
//    ofSetColor(0);
//    for (int x = 0; x < video.width; x+=step){
//        for (int y = 0; y < video.height; y+=step){
//            ofColor pixelColor = videoPixels.getColor(x, y);
//            float radius = ofMap(pixelColor.getBrightness(), 0, 255, height/2, height/2 * step);
//            ofCircle(x * width, y * height, radius);
//        }
//    }
    
    ofSetColor(0);
    for (int x = 0; x < video.width; x+=step){
        for (int y = 0; y < video.height; y+=step){
            ofColor pixelColor = videoPixels.getColor(x, y);
            int circleResolution = ofMap(pixelColor.getBrightness(), 0, 255, 3, 12);
            ofSetCircleResolution(circleResolution);
            float radius = height/2 * step;
            ofCircle(x * width, y * height, radius);
        }
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
