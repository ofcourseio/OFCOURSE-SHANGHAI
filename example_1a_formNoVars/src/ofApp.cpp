#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //set the number of points used to draw the circle by the ofCircle() function. The default of 22 is not enough to make a smooth looking circle with a radius of 100
    ofSetCircleResolution(35);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  
    //draw the polygons using built-in openframeworks functions
    ofTriangle(150, 70, 50, 223.205, 250, 223.205);
    ofRect(50, 273.205, 200, 200);
    ofCircle(150, 623.205, 100);
    
    
    //draw the triangle vertex by vertex
    ofBeginShape();
    ofVertex(400, 70);
    ofVertex(300, 223.205);
    ofVertex(500, 223.205);
    ofEndShape();
    
    //draw the square vertex by vertex
    ofBeginShape();
    ofVertex(300, 273.205);
    ofVertex(500, 273.205);
    ofVertex(500, 473.205);
    ofVertex(300, 473.205);
    ofEndShape();
    
    
    //draw the circle vertex by vertex
    ofBeginShape();
    ofVertex(400, 723.205);
    ofVertex(417.856, 721.598);
    ofVertex(435.137, 716.829);
    ofVertex(451.29, 709.05);
    ofVertex(465.794, 698.512);
    ofVertex(478.183, 685.554);
    ofVertex(488.06, 670.592);
    ofVertex(495.106, 654.107);
    ofVertex(499.095, 636.628);
    ofVertex(499.899, 618.719);
    ofVertex(497.493, 600.953);
    ofVertex(491.953, 583.903);
    ofVertex(483.457, 568.115);
    ofVertex(472.28, 554.099);
    ofVertex(458.779, 542.303);
    ofVertex(443.388, 533.108);
    ofVertex(426.604, 526.809);
    ofVertex(408.964, 523.608);
    ofVertex(391.036, 523.608);
    ofVertex(373.396, 526.809);
    ofVertex(356.612, 533.108);
    ofVertex(341.221, 542.303);
    ofVertex(327.72, 554.099);
    ofVertex(316.543, 568.115);
    ofVertex(308.047, 583.903);
    ofVertex(302.507, 600.953);
    ofVertex(300.101, 618.719);
    ofVertex(300.905, 636.628);
    ofVertex(304.894, 654.107);
    ofVertex(311.94, 670.592);
    ofVertex(321.817, 685.554);
    ofVertex(334.206, 698.512);
    ofVertex(348.71, 709.05);
    ofVertex(364.863, 716.829);
    ofVertex(382.144, 721.598);
    ofEndShape();
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
