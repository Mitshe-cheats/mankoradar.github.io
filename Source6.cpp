#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

std::string check(std::string username, std::string password);
void clear1();

int main8() {
	setlocale(LC_ALL, "");

	std::string user, password;
	std::cout << "User: ";
	std::cin >> user;
	clear1();

	std::cout << "Password: ";
	std::cin >> password;
	clear1();

	check(user, password);


	std::cout << "Pressione Enter para sair...";
	std::cin.ignore();
	std::cin.get();

	return 0;
}

std::string check(std::string username, std::string password) {

	if (username == "nako" && password == "gabo123")
	{
		std::cout << "Bem Vindo, " << username << "!" << "\n\n";
	}
	else if (username != "nako")
	{
		std::cout << "Usuário Incorreto!" << "\n\n";
	}
	else if (password != "gabo123")
	{
		std::cout << "Senha Incorreta!" << "\n\n";
	}

	return 0;
}


void clear1() {
	std::system("cls");		// Função para limpar a tela, mais simples de usar e pólui menos o código
}
