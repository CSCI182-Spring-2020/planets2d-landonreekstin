#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// Setup the window
	ofBackground(0, 0, 0);
	ofSetCircleResolution(50);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	//Setup the Sun
	sunPosition.x = ofGetWindowWidth() / 2;
	sunPosition.y = ofGetWindowHeight() / 2;
	sunSize = 40.0f;
	sunColor = ofColor::purple;

	// Setup Earth
	earthColor = ofColor::aquamarine;
	earthSize = sunSize / 4;
	earthDistance = 300.0f;
	earthSpeed = 0.01f;

	// Setup Moon
	moonColor = ofColor::white;
	moonSize = moonSize / 8;
	moonDistance = 100.0f;
	moonSpeed = 0.05f;

}

//--------------------------------------------------------------
void ofApp::update(){
	earthPosition.x = cos(ofGetFrameNum() * earthSpeed) * earthDistance;
	earthPosition.y = sin(ofGetFrameNum() * earthSpeed) * earthDistance;

	moonPosition.x = sin(ofGetFrameNum() * moonSpeed) * moonDistance;
	moonPosition.y = cos(ofGetFrameNum() * moonSpeed) * moonDistance;


}

//--------------------------------------------------------------
void ofApp::draw(){
	// Draw Sun
	ofSetColor(sunColor);
	ofTranslate(sunPosition);
	ofDrawCircle(0.0f, 0.0f, sunSize);

	// Draw Earth
	ofSetColor(earthColor);
	ofTranslate(earthPosition);
	ofDrawCircle(0.0f, 0.0f, earthSize);

	// Draw Moon
	ofSetColor(moonColor);
	ofTranslate(moonPosition);
	ofDrawCircle(0.0f, 0.0f, moonSize);
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
