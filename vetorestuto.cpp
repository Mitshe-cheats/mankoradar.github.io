#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include <cstdlib>
#include <ctime>


int main10() {

	int vetor[10]; 	// Vetor começa sempre por 0 e termina no 9, Vetores também podem ser outros tipos além de int.
	/*
	Vetor[10] :
				int vetor0
				int vetor1
				int vetor2
				int vetor3
				[...]
	*/

	/*
	Armazenar valores no vetor:
				
				vetor[0] = 4448484;
				vetor[1] = 44;
				vetor[2] = 8898;
				vetor[3] = 10;
				[...]
	*/

	/*
	Exibir o valor da minha array em algum array especifico:
				
				std::cout << vetor[4] << '\n';
	*/

	/*
	Ler todos valores do meu array com For:
				
				int i; // Indice

				for(i = 0; i < 5; ++i){
						std::cout << vetor[1] << '\n';
				}
	
	Facilitar de mudar o número de arrays com sizeof:

				for(i = 0; i < sizeof(vetor) / 4; ++i){
						std::cout << vetor[1] << '\n';
				}	

				sizeof retorna o tamanho de bytes, por exemplo o int são 4 bytes, então precisamos botar /4 para ficar correto.

	Também podemos fazer uma variavel com o tamanho que queira:
				
				int tam = 5;
				int vetor[tam];
	
	*/

	/*
	Declarar os arrays e os elementos na mesma linha:
				
				int vetor[5] = {10,20,30,40,50};

	Não pode declarar o número em uma variavel caso for declarar os elementos na mesma linha já.

	*/





	return 0;
}