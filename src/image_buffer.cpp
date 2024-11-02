#include <iostream>
#include <fstream>

#include "image_buffer.h"

imageBuffer::imageBuffer(int w, int h) 
	: width{w}, height{h} {
	
	color c;
	c.r = 0;
	c.g = 0;
	c.b = 0;
	grid.resize(height);
	//std::cout << "grid.size(): " << grid.size() << "\n";
	for (int i=0; i<height; i++) {
		grid[i].resize(width);
		//std::cout << "grid[" << i << "].size(): " << grid[i].size() << "\n";
		for (int j=0; j<width; j++) {
			//grid[i][j] = c;
		}
	}
	
}

imageBuffer::~imageBuffer() {
}

void imageBuffer::writeToPPM(const std::string& filename) {
	std::ofstream image_file(filename);
	if (!image_file) {
		std::cout << "error opening file\n";
	}
	
	// ppm header
    image_file << "P3\n" << width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image_file << grid[i][j].r << ' ' << grid[i][j].g << ' ' << grid[i][j].b << '\n';
        }
    }

	image_file.close();

	

}
