#include <iostream>

int main(int argc, char **argv){

	bool	ResultadoLogico;
	double Numero; 

	std::cout << "Digite um numero: " << '\n';
	std::cin >> Numero;
	std::cout << "\nTrue = 1, False = 0" << '\n';
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O Numero digitado é maior que 100?: " << ResultadoLogico << '\n' << '\n';

	return 0;
}
