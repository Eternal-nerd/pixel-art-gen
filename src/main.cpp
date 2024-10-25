#include <iostream>
#include <fstream>
#include <filesystem>

#include "image_buffer.h"

const int image_width = 256;
const int image_height = 256;

const char* ppm_color(int r, int g, int b) {
	return "";
}

// PPM file LC = width * height + 3 (header)

int main() {
	std::cout << "Starting.\n";

	std::ofstream image_file("../image.ppm");
	if (!image_file) {
		std::cout << "error opening file\n";
	}

	// ppm header
    image_file << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        for (int i = 0; i < image_width; i++) {
            double r = double(i) / (image_width-1);
            double g = double(j) / (image_height-1);
            double b = 0.9;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            image_file << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

	image_file.close();

	return 0;
}
