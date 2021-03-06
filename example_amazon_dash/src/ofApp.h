#pragma once

#include "ofMain.h"
#include "ofxSniffer.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void exit();
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
    ofxSniff sniff;
    
    void arpRequestFrame(ofxSnifferARPRequestFrame &arpRequest);
    
    // a deque is like a vector that can be
    // pushed/popped from back or front
    deque<string> incomingPackets;
    
    set<string>  arpRequestHWAddr;
   
  
    

};
