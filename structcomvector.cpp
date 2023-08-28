#include <iostream>

struct Carro1
{
	std::string nome1;
	std::string cor1;
	int cavalos1;
	int veloMax1;
	int vel1;

	void insere1(std::string stnome1, std::string stcor1, int stcavalos1, int stveloMax1) {
		nome1 = stnome1;
		cor1 = stcor1;
		cavalos1 = stcavalos1;
		veloMax1 = stveloMax1;
		vel1 = 0;
	}

	void mostra1() {
		std::cout << "\nNome: " << nome1 << "\n";
		std::cout << "Cor: " << cor1 << "\n";
		std::cout << "Cavalos: " << cavalos1 << "\n";
		std::cout << "Velocidade atual: " << vel1 << "\n";
		std::cout << "Velocidade maxima: " << veloMax1 << "\n";
	}

	void mudavel1(int mv1) {
		vel1 = mv1;

		if (vel1 > veloMax1)
		{
			vel1 = veloMax1;
		}
		if (vel1 < 0)
		{
			vel1 = 0;
		}

	}
};




int main20() {

	// Uma struct em C++ é uma construção que permite agrupar diferentes tipos de variáveis relacionadas em uma única unidade.

	Carro1 *carros = new Carro1[5];

	Carro1 car1, car2, car3, car4, car5;
	
	carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

	carros[0].insere1("Lamborghini SVJ", "Vermelha", 750, 400);
	carros[1].insere1("Lamborghini Urus", "Preta", 350, 300);
	carros[2].insere1("Ferrari 458", "Vermelha", 600, 350);
	carros[3].insere1("Fusca", "Azul", 1050, 500);
	carros[4].insere1("Civic", "Cinza", 850, 420);

	for (int i = 0; i < 5; i++)
	{
		carros[i].mostra1();
	}
	

	return 0;
}
