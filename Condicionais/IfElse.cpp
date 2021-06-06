#include <iostream>
#include <string>

int main(int argc, char **argv){
	
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;

	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso" << '\n';
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n Acesso Permitido!" << '\n';
		bAcesso = true;
	}

	else
	{
		std::cout << "\nAcesso Negado!\n" << '\n';
		exit(0);
	}

	bFezSol = bCarroPronto = bSalarioDepositado = true;

	if(bAcesso)
	{ 
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!\n" << '\n';
		}

		else
		{
			std::cout << "\nNão Vai dar Praia!!!\n" << '\n';
		}
	}

	return 0;
	
}
