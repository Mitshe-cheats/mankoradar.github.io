#include <iostream>

int main24() {
    char* vnome;

    // Alocar memória para uma string de tamanho máximo (por exemplo, 100)
    vnome = new char[100]; // Alocará dinamicamente um array de 100 caracteres na memória e fará com que o ponteiro vnome aponte para o primeiro elemento desse array. Isso permite que você armazene uma string de até 100 caracteres na memória alocada dinamicamente.

    std::cout << "Digite um nome: ";
    std::cin.getline(vnome, 100);

    std::cout << "Você digitou: " << vnome << std::endl;

    // Liberar a memória alocada
    delete[] vnome;

    return 0;
}
