#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

void contador(int num, int cont = 0);

int main14() {

	contador(20);

	

	return 0;
}

void contador(int num, int cont) {
	std::cout << cont << '\n';
	if (num > cont)
	{
		contador(num, ++cont);
	}
}