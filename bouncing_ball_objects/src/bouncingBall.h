//
//  bouncingBall.h
//  bouncing_ball_objects
//
//  Created by Jason Levine on 2015-10-29.
//
//

#pragma once
#include "ofMain.h"

class bouncingBall {
public:
    void setup();
    void update();
    void draw();

private:
    ofPoint pos;
    ofPoint vel;
    float radius;
    ofColor col;
};