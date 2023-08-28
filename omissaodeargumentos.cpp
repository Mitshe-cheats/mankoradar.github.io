#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

void print(std::string txt = "Digite algo!");

int main13() {


	print();

	return 0;
}

void print(std::string txt) {
	std::cout << '\n' << txt << '\n';
}