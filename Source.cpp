#include <iostream>

int main2()
{
	
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto = false;

	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	std::cout << "Digite a palavra secreta: ";
	std::cin >> palavra;
	system("cls");

	while (palavra[i] != '\0') {
		i++;
		tam++;
	}

	for (i = 0; i < 30; i++) {
		secreta[i] = '-';
	}

	while ((chances > 0) && (acertos < tam))
	{
		std::cout << "Chances restantes: " << chances << "\n\n";
		std::cout << "Palavra Secreta: ";
		for (i = 0; i < tam; i++) {
			std::cout << secreta[i];
		}

		std::cout << "Digite uma letra: ";
		std::cin >> letra[0];

		for (i = 0; i < tam; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}

		if (!acerto) {
			chances--;
		}
		acerto = false;
		system("cls");

	}

	if (acertos == tam) {
		std::cout << "Tu ganhou!\n";
	}
	else
	{
		std::cout << "Tu perdeu, ruim dms kkkkkkkkk\n";
	}

	return 0;
}