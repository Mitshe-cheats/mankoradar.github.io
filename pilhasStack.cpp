#include <iostream>
#include <stack>

int main16() {

	/*
	Primeiro elemento = Primeiro a entrar na "pilha"
	�ltimo elemento = �litmo elemento � o primeiro a sair da "pilha" e o primeiro o �ltimo
	*/

	std::stack <std::string> cartas;

	if (cartas.empty()) // Se a pilha est� vazia ent�o
	{
		std::cout << "Pilha vazia\n\n";
	}
	else // Se n�o est� vazia
	{
		std::cout << "Pilha com cartas\n\n";
	}

	// Push = adiciona � pilha.

	cartas.push("Rei de Copas"); // Final = primeiro a ser adicionado
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus"); // Topo = �ltimo a ser adicionado

	if (cartas.empty()) // Se a pilha est� vazia ent�o
	{
		std::cout << "Pilha vazia\n\n";
	}
	else // Se n�o est� vazia
	{
		std::cout << "Pilha com cartas\n\n";
	}

	while (!cartas.empty()) // Enquanto a pilha n�o est� vazia ent�o
	{
		cartas.pop(); // Retira a carta
	}


	std::cout << "Tamanho da pilha: " << cartas.size() << '\n'; // Retorna o tamanho da pilha

	std::cout << "Carta do topo: " << cartas.top() << '\n'; // Retorna o que est� no topo da pilha

	cartas.pop(); // Retirar elemento do topo = rei de paus
	cartas.pop(); // Retirar elemento do topo = rei de ouros

	std::cout << "Nova carta do topo: " << cartas.top() << '\n';


	return 0;
}