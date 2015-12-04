//
//  sequenceRenderer.h
//  save_frame
//
//  Created by Jason Levine on 2015-12-04.
//
//

#pragma once
#include "ofMain.h"

class sequenceRenderer {
public:
    void setup() {
        path = "myRender";
        name = "render";
        frameNum = 0;
        renderFrame.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
        renderToDisk.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_COLOR);
        
        renderFrame.begin();
        ofClear(0,0);
        renderFrame.end();
        
        t = 0;
        elapsedTimef = 0;
    }
    
    void setPath(string _path) { path = _path; }
    void setName(string _name) { name = _name; }
    
    
    //enclose all computation (update and draw) between startTiming and endTiming
    void beginTiming() {
        t = ofGetElapsedTimef();
    }
    
    void endTiming() {
        float deltaT = ofGetElapsedTimef() - t;
        elapsedTimef += deltaT;
    }
    
    
    //enclose any draw calls between beign and end
    void begin() {
        if (rendering) {
            renderFrame.begin();
            ofClear(0,0);
        }
    }
    
    void end() {
        if (rendering) {
            renderFrame.end();
            
            ofSetColor(255);
            renderFrame.draw(0,0);
            
            ofPixels renderPix;
            renderFrame.readToPixels(renderPix);
            renderToDisk.setFromPixels(renderPix);
            
            string filename = path + "/" + name + ofToString(frameNum) + ".png";
            renderToDisk.saveImage(filename);
            frameNum++;
        }
    }
    
    //use this instead of ofGetElapsedTimef()
    float getElapsedTimef() {
        if (rendering) {
            return elapsedTimef;
        }
        else {
            return ofGetElapsedTimef();
        }
    }
    
    //start/stop rendering to disk
    void startRendering() {
        frameNum = 0;
        elapsedTimef = ofGetElapsedTimef();
        rendering = true;
    }
    
    void stopRendering() {
        rendering = false;
    }
    
    
private:
    string path;
    string name;
    
    int frameNum;
    ofFbo renderFrame;
    ofImage renderToDisk;
    
    float t;
    float elapsedTimef;
    
    bool rendering;
};