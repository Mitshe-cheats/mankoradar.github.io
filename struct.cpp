#include <iostream>

struct Carro
{
	std::string nome;
	std::string cor;
	int cavalos;
	int veloMax;
	int vel;

	void insere(std::string stnome, std::string stcor, int stcavalos, int stveloMax) {
		nome = stnome;
		cor = stcor;
		cavalos = stcavalos;
		veloMax = stveloMax;
		vel = 0;
	}

	void mostra() {
		std::cout << "\nNome: " << nome << "\n";
		std::cout << "Cor: " << cor << "\n";
		std::cout << "Cavalos: " << cavalos << "\n";
		std::cout << "Velocidade atual: " << vel << "\n";
		std::cout << "Velocidade maxima: " << veloMax << "\n";
	}

	void mudavel(int mv) {
		vel = mv;

		if (vel > veloMax)
		{
			vel = veloMax;
		}
		if (vel < 0)
		{
			vel = 0;
		}

	}
};




int main19() {

	// Uma struct em C++ é uma construção que permite agrupar diferentes tipos de variáveis relacionadas em uma única unidade.

	Carro car1, car2, car3, car4;

	car1.insere("Lambo", "Preta", 800, 400);

	car1.mostra();
	car1.mudavel(150);
	car1.mostra();

	return 0;
}
