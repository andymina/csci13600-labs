#include "box.h"

std::string box(int width, int height){
	std::string output = "";

	for (int i = 0; i < height; i++){
		for (int j = 0; j < width; j++){
			output += "*";
		}

		output += "\n";
	}

	return output;
}
