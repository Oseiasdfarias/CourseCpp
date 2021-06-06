#include <iostream>

int main(int argc, char **argv)
{
	int escolha = 0;
	do
	{
		std::cout << "\n***** Tickets Cinema *****" << '\n';
		std::cout << "\n1 - Para Meia Entrada" << '\n';
		std::cout << "2 - Para Inteira" << '\n';
		std::cout << "3 - Para sair" << '\n';
		std::cout << "\nDigite Sua Escolha: ";
		std::cin >> escolha;

		switch (escolha) 
		{
			case 1: std::cout << "\nTicket Meia Entrada Comprada!!!" << '\n'; 
				break;
			case 2: std::cout << "\nTicket Inteira Comprada!!!" << '\n';
				break;
			case 3: std::cout << "\nSair do Menu\n\n";
				break;
			default: std::cout << "\nOpção Inválida!!!\n\n";
		}
		
	} while (escolha != 3);	
	return 0;
}
