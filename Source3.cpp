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
	std::cout << "Escolha uma op��o: [1 = Soma] [2- Subtra��o] [3- Multiplica��o] [4- Divis�o]\n\n";
	std::cout << "Op��o: ";
	std::cin >> option;
	
	if (option >= 1 && option <= 4)
	{
		std::cout << "\nAgora escolha o primeiro n�mero: ";
		std::cin >> numero1;
		std::cout << "\nAgora escolha o segundo n�mero: ";
		std::cin >> numero2;

		calculator(numero1, numero2, option);
	}
	else
	{
		std::cout << "\nOp��o inv�lida.\n";
	}

	system("pause");
	goto inicio;
}

void calculator(int n1, int n2, int tipo) {
	switch (tipo)
	{
	case 1:
		std::cout << "\nA soma dos valores: " << n1 << " + " << n2 << " �: " << n1 + n2 << '\n';
		break;
	case 2:
		std::cout << "\nA subtra��o dos valores: " << n1 << " - " << n2 << " �: " << n1 - n2 << '\n';
		break;
	case 3:
		std::cout << "\nA multiplica��o dos valores: " << n1 << " x " << n2 << " �: " << n1 * n2 << '\n';
		break;
	case 4:
		if (n2 != 0) {
			std::cout << "\nA divis�o dos valores: " << n1 << " � " << n2 << " �: " << static_cast<float>(n1) / n2 << '\n';
		}
		else
		{
			std::cout << "N�o � poss�vel dividir por zero.\n";
		}

		break;

	default:
		std::cout << "\nOp��o inv�lida.\n";
	}
	
}