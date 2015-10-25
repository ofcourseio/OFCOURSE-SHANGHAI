#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    
    //functions to setup variables
    void setupPolygonVars();
    void setupTriangleVars();
    void setupRectVars();
    void setupCircleVars();
    void resizeWindow();
    
    void drawTriangleByVertex(float x1, float y1, float x2, float y2, float x3, float y3);
    void drawRectByVertex(float x, float y, float kwan, float gao);
    void drawCircleByVertex(float centerX, float centerY, float radius);
    
    

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //variables that effect all polygons
    float polygonW; //width of all polygons
    float yOffset; //space between the top of the screen and the first polygon
    float xOffset1; //space between the left side of the screen and the first column of polygons
    float xOffset2; //space between the left side of the screen and the second column of polygons
    float spacerH; //space betwen each polygon
    
    //variables that effect the triangle
    float triangleH; //height of the triangle
    float triX1, triY1, triX2, triY2, triX3, triY3; //coordinates of the triangle
    
    //variables that effect the square(rectangle)
    float rectX, rectY; //coordinates of the top left corner of the rectangle
    float rectW, rectH; //width and height of the rectangle
    
    //variables that effect the circle
    float circX, circY; //coordinates of the center of the circle
    float radius; //radius of the circle
    float circRes; //"circle resolution" = how many points in the circle
    
};
