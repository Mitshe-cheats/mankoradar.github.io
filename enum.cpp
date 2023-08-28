#include <iostream>

int main15() {
	
	enum armas{fuzil = 100, revolver = 7, rifle = 12, escopeta = 1};

	armas armaSel;

	armaSel = rifle;

	std::cout << armaSel;


	return 0;
}