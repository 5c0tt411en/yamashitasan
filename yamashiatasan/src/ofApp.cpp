#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    ofVec2f Init = ofVec2f(0, 0);
    for (int i = 0; i < frameNum; i++) pos.push_back(Init);
//    for (int i = 0; i < 6; i++) {
//        footage.load("a.mov");
//        footage[0].play();
//        footage[0].setFrame(0);
//    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < triggeredPos.size(); i++) {
        triggeredPos[i].z++;
        if (triggeredPos[i].z >= 100) triggeredPos.erase(triggeredPos.begin() + i);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    /*---------------Debug---------------*/
    string posText = "position";
    posText += '\n';
    ofSetColor(255, 0, 0, 50);
    for (int i = 0; i < frameNum; i++) {
        /*all circle*/
        ofDrawCircle(pos[i].x, pos[i].y, 5);
        posText += ofToString(i + 1) + " : (" + ofToString(pos[i].x) + ", " + ofToString(pos[i].y) + ")" + "\n";
    }
    ofDrawBitmapStringHighlight(posText, 20, 20);
    string triggeredText = "triggered position";
    triggeredText +=  + '\n';
    for (int i = 0; i < triggeredPos.size(); i++)
        triggeredText += ofToString(i + 1) + " : (" + ofToString(triggeredPos[i].x) + ", " + ofToString(triggeredPos[i].y)  + ", " + ofToString(triggeredPos[i].z) + ", " + ofToString(triggeredPos[i].w) + ")" + "\n";
    ofDrawBitmapStringHighlight(triggeredText, 170, 20);
    /*triggered circle*/
    ofSetColor(0, 0, 255, 50);
    for (int i = 0; i < triggeredPos.size(); i++) {
        ofDrawCircle(triggeredPos[i].x, triggeredPos[i].y, 10);
    }
    
    /*---------------draw---------------*/
    
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
    if (!triggeredPos.size() ||
        (pos.at(frameNum - 2) != ofVec2f(0, 0) && (abs(pos.back().x - pos.at(frameNum - 2).x) > triggerRange || abs(pos.back().y - pos.at(frameNum - 2).y) > triggerRange)))
        triggeredPos.push_back(ofVec4f(pos.back().x, pos.back().y, 0, int(ofRandom(6))));
    
    for (int i = 0; i < triggeredPos.size(); i++) {
        
    }
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
