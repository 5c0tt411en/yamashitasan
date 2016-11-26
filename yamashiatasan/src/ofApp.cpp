#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofVec2f Init = ofVec2f(0, 0);
    for (int i = 0; i < frameNum; i++) {
        pos.push_back(Init);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    string posText;
    for (int i = 0; i < frameNum; i++) {
        posText += ofToString(i + 1) + " : (" + ofToString(pos[i].x) + ", " + ofToString(pos[i].y) + ")" + "\n";
    }
    ofDrawBitmapStringHighlight(posText, 20, 20);
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
    ofVec2f mouse = ofVec2f(x, y);
    pos.push_back(mouse);
    if (pos.size() >= frameNum) pos.erase(pos.begin());
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
