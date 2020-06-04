#pragma once
#include "ofMain.h"

class walker {
	public:
		//construct.
		walker();

		//data
		int x;
		int y;
		int scale;

		//methods.
		void updateStep();
		void draw();
		int constrain(int, int, int);
};