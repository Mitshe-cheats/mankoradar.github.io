#include <iostream>

int main22() {

	int* p;
	int vetor[10];

	//p = &vetor[0];

	p = &vetor[0]; // Atribuindo ao meu ponteiro o primeiro endereço do elemento do meu array ( vetor) : vetor[0]
	*p = 10; // Seta 10
	std::cout << "\n" << vetor[0] << "\n";

	*(p += 1); // Encrementa 1
	*p = 20; // Seta em 20 
	std::cout << "\n" << vetor[1] << "\n";

	*(p += 1); // Encrementa 1
	*p = 30; // Seta em 20
	std::cout << "\n" << vetor[2] << "\n";

	return 0;
}