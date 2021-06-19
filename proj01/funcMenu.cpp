#include <iostream>
#include <locale.h>
#include "funcMenu.h"

void ExibirMenu()
{
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "\n****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "2 - Para Inteira\n";
		std::cout << "3 - Sair";

	} while (ProcessarEscolha(RetornarEscolha()) != 3);//enquanto escolha for diferente de 3 o 
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\n\nEscolha sua opção: ";
	std::cin >> escolha;
	return escolha;
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
		break;
	}
	return TipoEscolha;
}