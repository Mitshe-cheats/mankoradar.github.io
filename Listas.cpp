#include <iostream>
#include <list>

int main18() {

	std::list <int> aula, teste; // Criar lista "aula" e "teste"

	int tam; // Tamanho da lista

	std::list <int>::iterator it; // Criar iterator

	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);

	tam = 10; // // Tamanho da lista

	for (int i = 0; i < tam; i++)
	{
		aula.push_front(i); // Adicionar na frente
	}

	it = aula.begin(); // Iterator no começo da lista
	advance(it, 3); // Avançar 5 posições.
	aula.insert(it, 0); // Inserir 0 no iterator que foi definido como posição +5
	aula.erase(it); // Retirar


	aula.merge(teste); // Mescla a lista aula + teste

	std::cout << "Tamanho da lista: " << aula.size() << "\n\n";

	//aula.sort(); // Ordena a lista
	//aula.reverse(); // Reverte a lista

	tam = aula.size(); // tam = tamanho da lista

	for (int i = 0; i < tam; i++)
	{
		std::cout << aula.front() << "\n";
		aula.pop_front(); // Retirar do começo
	}

	std::cout << "\nTamanho da lista: " << aula.size() << "\n";


	return 0;
}