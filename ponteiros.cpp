#include <iostream>

int main21() {
	// Um ponteiro armazena o endere�o de memoria de outra variavel.
	// * = ponteiro

	std::string veiculo = "Carro";
	std::string* pv;

	pv = &veiculo; // Ponteiro pv recebe o endere�o da variavel carro.

	std::cout << pv << "\n" << &veiculo;

	*pv = "moto"; // No endere�o apontado por *pv adicione o valor moto.

	std::cout << "\n" << veiculo << "\n" << *pv;

	return 0;
}