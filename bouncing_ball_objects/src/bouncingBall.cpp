//
//  bouncingBall.cpp
//  bouncing_ball_objects
//
//  Created by Jason Levine on 2015-10-29.
//
//

#include "bouncingBall.h"


void bouncingBall::setup(){
    pos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    vel.set(ofRandomuf()*4.0, ofRandomuf()*4.0);
    radius = ofRandom(10, 25);
    col.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void bouncingBall::update(){
    pos += vel;
    
    if (pos.x > ofGetWidth() || pos.x < 0) {
        vel.x *= -1;
    }
    
    if (pos.y > ofGetHeight() || pos.y < 0) {
        vel.y *= -1;
    }
}

void bouncingBall::draw(){
    ofSetColor(col);
    ofCircle(pos, radius);
}