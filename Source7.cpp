#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max) {		// Função getRandomNumber, recebe variaveis int min e max
	return min + (rand() % (max - min) + 1); // Retorna o numero random, é gerado apartir do numero minimo + random % max - min + 1 // exemplo: min = 1 max = 100 então: 1 + random ( 99 + 1 )
}

bool checkIfGuessed(int guess, int target) {	// Função booleana que check qual foi a tentativa e check se é igual à a palavra correta
	return guess == target;		// Retorna se é true or false, true se for igual e false se não for igual
}

int main9() {
	setlocale(LC_ALL, "");		// Permitir acentos etc da lingua portuguesa
	srand(static_cast<unsigned>(time(nullptr))); // Gerar uma seed baseado na hora

	int number, trys = 0;
	int randomnumber = getRandomNumber(1, 100);
	

	std::cout << "Bem Vindo ao jogo da sorte!";
	std::cout << "\n\nEntão vamos começar, escolha um numero entre 1-100: ";
	std::cin >> number;
	
	while (!checkIfGuessed(number, randomnumber)) // Enquanto checkIfGuessed for false, ele continua executando
	{
		if (number > randomnumber) // Se o número dito for maior que o gerado então
		{
			std::cout << "\n\nNúmero dito é maior que o número gerado! Tente um maior: ";
		}
		else                      // Se não for maior então só resta dizer que é menor, então...
		{
			std::cout << "\n\nNúmero dito é menor que o número gerado! Tente um menor: ";
		}
		std::cin >> number;
		trys++;
	}

	std::cout << "Parabéns! Você adivinhou o número " << randomnumber << " em " << trys << " tentativas.\n"; // Se o loop while der true então ele vai dizer que adivinhou.

	std::cout << "Pressione Enter para sair...";
	std::cin.ignore();
	std::cin.get();

	return 0;
}