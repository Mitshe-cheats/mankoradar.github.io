#include <iostream>
#include <vector>

int main() {
	// Vector != Vetor
	// Vector == "Array Moderna" e muito melhor.


	std::vector<int> num;
	int tam, i;

	num.push_back(10);
	num.push_back(2);
	num.push_back(5);
	num.push_back(8);

	tam = num.size();

	std::cout << "Tamanho do vector: " << tam << "\n";

	for (i = 0; i < tam; i++)
	{
		std::cout << num[i] << " ";
	}

	return 0;
}