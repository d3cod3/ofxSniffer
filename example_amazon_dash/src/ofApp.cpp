#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofAddListener(sniff.ARPRequestFrameEvent, this, &ofApp::arpRequestFrame);
    
    // Start the sniffing
    
    sniff.startSniffing("en0", false);
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::exit() {
    sniff.stopThread();
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofSetColor(255);
    int i;
    set<string>::iterator itr;
    
    i = 0;
    for(itr = arpRequestHWAddr.begin(); itr != arpRequestHWAddr.end(); itr++){
        ofDrawBitmapString(*itr, ofPoint(10, 20 * i + 20));
        i++;
    }
    
}

//--------------------------------------------------------------
void ofApp::arpRequestFrame(ofxSnifferARPRequestFrame & arpRequest){
    
    cout<< "Arp Request hw Adress: " + ofToString(arpRequest.addr) + " Timestamp " + arpRequest.packetTimeStamp <<endl;
    arpRequestHWAddr.insert(ofToString(arpRequest.addr));

}

void ofApp::keyPressed  (int key){
    
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

