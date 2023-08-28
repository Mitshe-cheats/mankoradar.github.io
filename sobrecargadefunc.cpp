#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

void soma5(int n1, int n2);
void soma5();

int main12() {

	soma5(20, 30);
	soma5();

	return 0;
}


void soma5(int n1, int n2) {
	int re;
	re = n1 + n2;

	std::cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << '\n';

}

void soma5() {
	int n1 = 10;
	int n2 = 20;
	int re;

	re = n1 + n2;

	std::cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << '\n';

}