#include <iostream>
#include <fstream>

const int image_width = 256;
const int image_height = 256;

int main() {
	std::cout << "Starting.\n";

	std::fstream image_file("image.ppm");
	if (!image_file) {
		std::cout << "error opening file\n";
	}

	// ppm header
    image_file << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        for (int i = 0; i < image_width; i++) {
            double r = double(i) / (image_width-1);
            double g = double(j) / (image_height-1);
            double b = 0.0;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            image_file << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

	return 0;
}
