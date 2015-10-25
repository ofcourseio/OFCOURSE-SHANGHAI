#include "ofApp.h"
#define TWOPI (2 * PI)

//--------------------------------------------------------------
void ofApp::setup(){

    setupPolygonVars();
    setupTriangleVars();
    setupRectVars();
    setupCircleVars();

    resizeWindow();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //draw the polygons using built-in openframeworks functions
    ofTriangle(triX1, triY1, triX2, triY2, triX3, triY3);
    ofRect(rectX, rectY, rectW, rectH);
    ofCircle(circX, circY, radius);
    
    //draw the polygons using our own custom functions
    drawTriangleByVertex(triX1 + xOffset2, triY1, triX2 + xOffset2, triY2, triX3 + xOffset2, triY3);
    drawRectByVertex(rectX + xOffset2, rectY, rectW, rectH);
    drawCircleByVertex(circX + xOffset2, circY, radius);
}



/******* SETUP FUNCTIONS *******/

//--------------------------------------------------------------
void ofApp::setupPolygonVars(){
    //define the variable that effect all polygons
    polygonW = 200;
    yOffset = 50;
    xOffset1 = 50;
    xOffset2 = xOffset1 + polygonW;
    spacerH = 50;
}

//--------------------------------------------------------------
void ofApp::setupTriangleVars(){
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
}

//--------------------------------------------------------------
void ofApp::setupRectVars(){
    //define the variables that effect the square(rectangle)
    rectX = xOffset1;
    rectY = yOffset + triangleH + spacerH;
    rectW = polygonW;
    rectH = polygonW;
}

//--------------------------------------------------------------
void ofApp::setupCircleVars(){
    //variables that effect the circle
    radius = polygonW * 0.5;
    circX = xOffset1 + radius;
    circY = yOffset + triangleH + spacerH + rectH + spacerH + radius;
    circRes = 35;
    ofSetCircleResolution(circRes);
}

//--------------------------------------------------------------
void ofApp::resizeWindow(){
    //resize the window to fit the polygons
    float windowW = 2 * polygonW + 3 * xOffset1;
    float windowH = 2 * yOffset + triangleH + 2 * spacerH + 2 * polygonW;
    
    ofSetWindowShape(windowW, windowH);
}

/******* DRAW FUNCTIONS *******/

//--------------------------------------------------------------
void ofApp::drawTriangleByVertex(float x1, float y1, float x2, float y2, float x3, float y3){
    //draw the triangle vertex by vertex
    ofBeginShape();
    ofVertex(x1, y1);
    ofVertex(x2, y2);
    ofVertex(x3, y3);
    ofEndShape();
}

//--------------------------------------------------------------
void ofApp::drawRectByVertex(float x, float y, float kwan, float gao){
    //draw the square vertex by vertex
    ofBeginShape();
    ofVertex(x, y);
    ofVertex(x + kwan, y);
    ofVertex(x + kwan, y + gao);
    ofVertex(x, y + gao);
    ofEndShape();
}

//--------------------------------------------------------------
void ofApp::drawCircleByVertex(float centerX, float centerY, float radius){
    //draw the circle vertex by vertex
    float inc = TWOPI/circRes;
    
    ofBeginShape();
    for (float radians = 0; radians < TWOPI; radians+=inc){
        float x = centerX + sin(radians) * radius;
        float y = centerY + cos(radians) * radius;
        ofVertex(x, y);
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
