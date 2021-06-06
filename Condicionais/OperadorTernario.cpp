#include <iostream>

int main(int argc, char **argv)
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";

	(Numero01 > Numero02) ? std::cout << "\nNumero01 Maior que Numero02\n\n" : \
	std::cout << "Numero02 Maior que Numero01\n\n";
	return 0;
}
