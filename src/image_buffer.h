#pragma once

#include "color.h"

class imageBuffer {

	public:
		// constructor
		imageBuffer(int width, int height);
		~imageBuffer();

	private:
		//TODO: Add dynamic 2d array to hold colors (array ptr using new)
		//color** grid;	
		int w;
		int h;
		

};
