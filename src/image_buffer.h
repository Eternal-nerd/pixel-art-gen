#pragma once

#include <vector>
#include <string>

#include "color.h"

class imageBuffer {

	public:
		// constructor
		imageBuffer(int w, int h);
		~imageBuffer();

		void writeToPPM(const std::string& filename);

	private:
		std::vector<std::vector<color>> grid;

		int width;
		int height;
		

};
