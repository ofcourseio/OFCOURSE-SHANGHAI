#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofColor barColor;
    ofColor circle1Color;
    ofColor circle2Color;
    ofColor circle3Color;
    ofColor circle4Color;
    ofColor circle5Color;
    ofColor circle6Color;
    ofColor circle7Color;
		
};
