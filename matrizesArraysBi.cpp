#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

int main11() {

	int matriz[3][4]; // 3 Linhas e 4 Colunas
	int l, c;

	// Prenchimento automatico da minha array:
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 4; c++)
		{
			std::cin >> matriz[l][c];
		}
	}

	/*
	Graficamente representado a matriz:

		Linhas			Posições(Colunas)
						0	1	2
						---------
		0				0	0	0
		1				0	0	0
		2				0	0	0

	
	*/
	
	// Percorrer o conteudo da minha array com for:
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 4; c++)
		{
			std::cout << matriz[l][c] << " ";
		}
		std::cout << '\n';
	}
	


	return 0;
}