#include <iostream>

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(std::string tra[4]);

int main4() {

	int res;
	std::string tranp[4] = { "Carro", "Moto", "Barco", "Aviao" };

	texto();
	soma(7, 3);
	res = soma2(175, 35);

	std::cout << "Valor de res: " << res << "\n";

	tr(tranp);

	system("pause");
	return 0;
}

void texto() {
	std::cout << "Canal do Nako\n";
}

void soma(int n1, int n2) {
	std::cout << "A soma dos numeros sao: " << n1 + n2 << "\n";
}

int soma2(int n1, int n2) {
	return n1 + n2;
}

void tr(std::string tra[4]) {
	for (int i = 0; i < 4; i++)
	{
		std::cout << tra[i] << "\n";
	}
}