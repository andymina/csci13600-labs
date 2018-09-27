#include <iostream>
#include "compare.cpp"
#include "east_storage.cpp"
#include "min_storage.cpp"
#include "max_storage.cpp"
#include "reverse.cpp"

int main(){
	std::cout << "East storage on 01/01/2016: " << east_storage("01/01/2016") << std::endl;
	std::cout << compare("01/01/2016", "12/31/2016") << std::endl;
	std::cout << reverse("09/13/2016", "09/17/2016") << std::endl;
	std::cout << "Min east storage: " << min_storage() << std::endl;
	std::cout << "Max east storage: " << max_storage() << std::endl;
}
