#include <iostream>

#include "image_buffer.h"

const int image_width = 256;
const int image_height = 256;

// PPM file LC = width * height + 3 (header)

int main() {
	std::cout << "Starting.\n";

	imageBuffer image(image_width, image_height);
	
	image.writeToPPM("../image.ppm");

	return 0;
}
