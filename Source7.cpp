#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max) {		// Fun��o getRandomNumber, recebe variaveis int min e max
	return min + (rand() % (max - min) + 1); // Retorna o numero random, � gerado apartir do numero minimo + random % max - min + 1 // exemplo: min = 1 max = 100 ent�o: 1 + random ( 99 + 1 )
}

bool checkIfGuessed(int guess, int target) {	// Fun��o booleana que check qual foi a tentativa e check se � igual � a palavra correta
	return guess == target;		// Retorna se � true or false, true se for igual e false se n�o for igual
}

int main9() {
	setlocale(LC_ALL, "");		// Permitir acentos etc da lingua portuguesa
	srand(static_cast<unsigned>(time(nullptr))); // Gerar uma seed baseado na hora

	int number, trys = 0;
	int randomnumber = getRandomNumber(1, 100);
	

	std::cout << "Bem Vindo ao jogo da sorte!";
	std::cout << "\n\nEnt�o vamos come�ar, escolha um numero entre 1-100: ";
	std::cin >> number;
	
	while (!checkIfGuessed(number, randomnumber)) // Enquanto checkIfGuessed for false, ele continua executando
	{
		if (number > randomnumber) // Se o n�mero dito for maior que o gerado ent�o
		{
			std::cout << "\n\nN�mero dito � maior que o n�mero gerado! Tente um maior: ";
		}
		else                      // Se n�o for maior ent�o s� resta dizer que � menor, ent�o...
		{
			std::cout << "\n\nN�mero dito � menor que o n�mero gerado! Tente um menor: ";
		}
		std::cin >> number;
		trys++;
	}

	std::cout << "Parab�ns! Voc� adivinhou o n�mero " << randomnumber << " em " << trys << " tentativas.\n"; // Se o loop while der true ent�o ele vai dizer que adivinhou.

	std::cout << "Pressione Enter para sair...";
	std::cin.ignore();
	std::cin.get();

	return 0;
}