#include <iostream>
#include <queue>


int main17() {

	std::queue <std::string> cartas;

	// Push = adiciona à fila.

	cartas.push("Rei de Copas"); //1
	cartas.push("Rei de Espadas"); //2
	cartas.push("Rei de Ouros"); //3
	cartas.push("Rei de Paus"); //4

	std::cout << "Tamanho da fila..... : " << cartas.size() << '\n';
	std::cout << "Primeira carta..... : " << cartas.front() << '\n';
	std::cout << "Ultima carta.... : " << cartas.back() << "\n\n";

	while (!cartas.empty())
	{
		std::cout << "\nPrimeira carta: " << cartas.front() << '\n';
		cartas.pop();
	}


	/*
	Fila/Queue:

	Primeiro elemento a entrar e o primeiro a sair.
	Último a entrar e o último a sair.
	

	empty
	size
	front
	back
	push
	pop

	*/





	return 0;
}