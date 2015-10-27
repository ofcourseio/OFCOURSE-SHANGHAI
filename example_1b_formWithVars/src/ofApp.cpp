#include "ofApp.h"
#define TWOPI (2 * PI)

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    //define the variable that effect all polygons
    polygonW = mouseX;
    yOffset = 50;
    xOffset1 = 50;
    xOffset2 = xOffset1 + polygonW;
    spacerH = 50;
    
    //define the variables that effect the triangle
    //we'll use the pythagorean theorem to make an equilateral triangle
    float c = polygonW;
    float a = polygonW * 0.5;
    triangleH = sqrt(c * c - a * a);
    
    triX1 = xOffset1 + polygonW * 0.5;
    triY1 = yOffset;
    triX2 = xOffset1;
    triY2 = yOffset + triangleH;
    triX3 = xOffset1 + polygonW;
    triY3 = yOffset + triangleH;
    
    //define the variables that effect the square(rectangle)
    rectX = xOffset1;
    rectY = yOffset + triangleH + spacerH;
    rectW = polygonW;
    rectH = polygonW;
    
    //variables that effect the circle
    radius = polygonW * 0.5;
    circX = xOffset1 + radius;
    circY = yOffset + triangleH + spacerH + rectH + spacerH + radius;
    circRes = 35;
    ofSetCircleResolution(circRes);
    
    //resize the window to fit the polygons
    float windowW = 2 * polygonW + 3 * xOffset1;
    float windowH = 2 * yOffset + triangleH + 2 * spacerH + 2 * polygonW;
    
    ofSetWindowShape(windowW, windowH);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draw the polygons using built-in openframeworks functions
//    ofTriangle(triX1, triY1, triX2, triY2, triX3, triY3);
    ofRect(rectX, rectY, rectW, rectH);
    ofCircle(circX, circY, radius);
    
    //draw the triangle vertex by vertex
    ofBeginShape();
    ofVertex(triX1 + xOffset2, triY1);
    ofVertex(triX2 + xOffset2, triY2);
    ofVertex(triX3 + xOffset2, triY3);
    ofEndShape();
    
    //draw the square vertex by vertex
    ofBeginShape();
    ofVertex(rectX + xOffset2, rectY);
    ofVertex(rectX + rectW + xOffset2, rectY);
    ofVertex(rectX + rectW + xOffset2, rectY + rectH);
    ofVertex(rectX + xOffset2, rectY + rectH);
    ofEndShape();
    
    //draw the circle vertex by vertex
    float inc = TWOPI/circRes;
    
    ofBeginShape();
    for (float radians = 0; radians < TWOPI; radians+=inc){
        float x = circX + sin(radians) * radius;
        float y = circY + cos(radians) * radius;
        ofVertex(x + xOffset2, y);
    }
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
