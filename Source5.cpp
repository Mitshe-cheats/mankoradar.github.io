#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

void clear();

int main7() {
	setlocale(LC_ALL, "");

	std::string user, password;
	std::cout << "User: ";
	std::cin >> user;
	clear();

	std::cout << "Password: ";
	std::cin >> password;
	clear();

	if (user == "nako" && password == "gabo123")
	{
		std::cout << "Bem vindo, " << user << "!" << "\n\n";
	}
	else
	{
		std::cout << "Larga mão de ser besta!" << "\n\n";
	}

	std::cout << "Pressione Enter para sair...";
	std::cin.ignore();
	std::cin.get();

	return 0;
}


void clear() {
	std::system("cls");
}
