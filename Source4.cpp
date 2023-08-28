#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

void media(float nota1, float nota2);

int main6() {
	setlocale(LC_ALL, "");

	inicio:
	system("cls");

	float notaone, notatwo;

	std::cout << "Digite a primeira nota do aluno: ";
	std::cin >> notaone;
	std::cout << "\n\nDigite a segunda nota do aluno: ";
	std::cin >> notatwo;

	media(notaone, notaone);

}

void media(float nota1, float nota2) {
	if (nota1 && nota2 > 0)
	{
		float notaMedia = (nota1 + nota2) / 2;

		std::cout << "\n\nA média desse aluno é: " << notaMedia << '\n';
	}
	else
	{
		std::cout << "\n\nFumou muitas amigão.\n\n";
	}
}