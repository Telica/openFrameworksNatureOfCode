#include "walker.h"

walker::walker() {
	x = ofGetWidth() / 2;
	y = ofGetHeight() / 2;
	scale = 5;
}

void walker::draw() {
	ofSetColor(0, 20);
	ofDrawCircle(x, y, scale);
}

void walker::updateStep() {
	int choice = int(ofRandom(4));
	cout << choice << endl;

	if (choice == 0) x += 5;
	else if (choice == 1) x -=5;
	else if (choice == 2) y +=5;
	else if (choice == 3) y -=5;

	x = constrain(x, 0, ofGetWidth() - 1);
	y = constrain(y, 0, ofGetHeight() - 1);
}


int walker::constrain(int input, int min, int max) {
	return (input < min) ? min : ((input > max) ? max : input);
}
