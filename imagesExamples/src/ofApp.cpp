#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    colorPicker.loadImage("ofxColorPicker.png");
    colorPicker.resize(200, 200);
    colorPicker.update();
    
    colorPickerPoint.set(100,230);
    
    drawImage.loadImage("HappyFish.jpg");
    drawImage.resize(200, 200);
    drawImage.update();
    
    float x = colorPicker.width + 20 + 50 + 20;
    drawImagePoint.set(x, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofShowCursor();
    
    ofSetColor(255);
    colorPicker.draw(colorPickerPoint);
    
    ofSetColor(pixelColor);
    float x = colorPicker.width + 20;
    ofRect(x, 0, 50, 50);
    
    ofSetColor(255);
    drawImage.draw(drawImagePoint);

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
    if (x > colorPickerPoint.x &&
        x < colorPickerPoint.x + colorPicker.width &&
        y > colorPickerPoint.y &&
        y < colorPickerPoint.y + colorPicker.height) {
        
        pixelColor = colorPicker.getColor(x - colorPickerPoint.x,
                                          y - colorPickerPoint.y);
    }
    
    
    if (x > drawImagePoint.x &&
        x < drawImagePoint.x + drawImage.width &&
        y > drawImagePoint.y &&
        y < drawImagePoint.y + drawImage.height) {
        
        drawImage.setColor(x - drawImagePoint.x,
                           y - drawImagePoint.y,
                           pixelColor);
        drawImage.update();

    }

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
