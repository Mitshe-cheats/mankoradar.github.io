#include <iostream>

int main24() {
    char* vnome;

    // Alocar mem�ria para uma string de tamanho m�ximo (por exemplo, 100)
    vnome = new char[100]; // Alocar� dinamicamente um array de 100 caracteres na mem�ria e far� com que o ponteiro vnome aponte para o primeiro elemento desse array. Isso permite que voc� armazene uma string de at� 100 caracteres na mem�ria alocada dinamicamente.

    std::cout << "Digite um nome: ";
    std::cin.getline(vnome, 100);

    std::cout << "Voc� digitou: " << vnome << std::endl;

    // Liberar a mem�ria alocada
    delete[] vnome;

    return 0;
}
