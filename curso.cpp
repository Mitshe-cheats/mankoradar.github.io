// curso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main1()
{
    int vetor[5] = {10,20,30,40,50};
    int i;

    int matriz[3][4];
    int l, c;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            //std::cin >> matriz[l][c];
            std::cout << "Linha atual: " << l << "\n";
            std::cout << "Coluna atual: " << c  << "\n\n";
            std::cin >> matriz[l][c];
        }
    }

    system("cls");


    for (i = 0; i < sizeof(vetor) / 4; i++) {
        std::cout << vetor[i] << "\n\n";
    }

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            std::cout << matriz[l][c] << " ";
        }
        std::cout << "\n";
    }

    return 0;

}


