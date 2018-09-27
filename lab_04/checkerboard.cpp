#include "checkerboard.h"

std::string checkerboard(int width, int height){
	std::string output;

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			if (row % 2 != 0){
				output += " ";
			} else {
				output += "*";
			}
		}

		output += "\n";
	}


	return output;
}
