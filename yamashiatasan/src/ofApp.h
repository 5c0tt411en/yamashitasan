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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        void drawFootage(int num, int x, int y);
		
    vector<ofVec2f> pos;
    vector<ofVec4f> triggeredPos;
    const int   frameNum = 30,
    triggerRange = 30;
    float footageframeNum;
    ofVideoPlayer footage;
};
