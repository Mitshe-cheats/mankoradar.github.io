#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void calculator(int n1, int n2 ,int tipo);


int main5() {
	setlocale(LC_ALL, "");
	system("cls");

	int numero1, numero2, option;

	inicio:

	system("cls");

	std::cout << "\n=============Calculadora=============\n\n";
	std::cout << "Escolha uma opção: [1 = Soma] [2- Subtração] [3- Multiplicação] [4- Divisão]\n\n";
	std::cout << "Opção: ";
	std::cin >> option;
	
	if (option >= 1 && option <= 4)
	{
		std::cout << "\nAgora escolha o primeiro número: ";
		std::cin >> numero1;
		std::cout << "\nAgora escolha o segundo número: ";
		std::cin >> numero2;

		calculator(numero1, numero2, option);
	}
	else
	{
		std::cout << "\nOpção inválida.\n";
	}

	system("pause");
	goto inicio;
}

void calculator(int n1, int n2, int tipo) {
	switch (tipo)
	{
	case 1:
		std::cout << "\nA soma dos valores: " << n1 << " + " << n2 << " é: " << n1 + n2 << '\n';
		break;
	case 2:
		std::cout << "\nA subtração dos valores: " << n1 << " - " << n2 << " é: " << n1 - n2 << '\n';
		break;
	case 3:
		std::cout << "\nA multiplicação dos valores: " << n1 << " x " << n2 << " é: " << n1 * n2 << '\n';
		break;
	case 4:
		if (n2 != 0) {
			std::cout << "\nA divisão dos valores: " << n1 << " ÷ " << n2 << " é: " << static_cast<float>(n1) / n2 << '\n';
		}
		else
		{
			std::cout << "Não é possível dividir por zero.\n";
		}

		break;

	default:
		std::cout << "\nOpção inválida.\n";
	}
	
}