#include <iostream>

void soma(float *var, float valor);
void iniVetor(float* v);

int main23() {

	float num = 0;
	float vetor[5];


	soma(&num, 15);
	iniVetor(vetor);

	std::cout << num << "\n\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << vetor[i] << "\n\n";
	}


	return 0;
}

void soma(float *var, float valor) {

	*var += valor;

}

void iniVetor(float* v) {
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;
}