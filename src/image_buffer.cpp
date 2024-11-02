#include "image_buffer.h"

imageBuffer::imageBuffer(int width, int height) 
	: w{width}, h{height} {
	/* grid = new color[height];
	for (int i = 0; i<height; i++) {
		grid[i] = new color[width];
	}*/
}

imageBuffer::~imageBuffer() {
	/* for (int i=0; i<h; i++) {
		delete grid[i];
	}
	delete grid; */
}
