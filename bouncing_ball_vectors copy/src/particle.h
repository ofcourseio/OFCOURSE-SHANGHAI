//
//  particle.h
//  bouncing_ball_vectors
//
//  Created by Jason Levine on 2015-10-30.
//
//

#pragma once
#include "ofMain.h"

class particle {
public:
    void setup();
    void update();
    void draw();
    void bounceOfWalls();
    void wrapAround();


    ofPoint pos;
    ofPoint vel;
    float radius;
    ofColor col;

};