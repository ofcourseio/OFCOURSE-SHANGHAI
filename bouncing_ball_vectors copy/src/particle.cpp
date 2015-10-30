//
//  particle.cpp
//  bouncing_ball_vectors
//
//  Created by Jason Levine on 2015-10-30.
//
//

#include "particle.h"

void particle::setup(){
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    vel.set(ofRandomf()*5, ofRandomf()*5);
    radius = ofRandom(10, 15);
    col.set(ofRandom(255), 0, 200);
}

void particle::update(){
    pos += vel;
}

void particle::draw(){
    ofSetColor(col);
    ofCircle(pos, radius);
}

void particle::bounceOfWalls(){
    if (pos.x + radius > ofGetWidth() || pos.x - radius < 0) {
        vel.x *= -1;
    }
    
    if (pos.y + radius > ofGetHeight() || pos.y - radius < 0) {
        vel.y *= -1;
    }
}

void particle::wrapAround(){
    if (pos.x > ofGetWidth()) {
        pos.x = 0;
    }
    
    if (pos.x < 0) {
        pos.x = ofGetWidth();
    }
    
    if (pos.y > ofGetHeight()) {
        pos.y = 0;
    }
    
    if (pos.y < 0) {
        pos.y = ofGetHeight();
    }
}

