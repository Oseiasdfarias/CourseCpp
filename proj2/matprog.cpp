#include <iostream>
#include "mat.h"

int main(int argc, char **argv)
{
	int n1, n2;
	std::cout << "Digite Primeiro Número: ";
	std::cin >> n1;
	std::cout << "Digite Segundo Número: ";
	std::cin >> n2;

	std::cout << "\n\nResultados Operadores Matemáticos\n";
	std::cout << "Soma: " << Soma(n1, n2) << "\n";
	std::cout << "Subtração: " << Subtracao(n1, n2) << "\n";
	std::cout << "Multiplicação: " << Multiplicacao(n1, n2) << "\n";
	std::cout << "Divisão: " << Divisao(n1, n2) << "\n";
	std::cout << "Potência: " << Potencia(n1, n2) << "\n";
	std::cout << "Raiz Quadrada n1: " << RaizQuadrada(n1) << "\n";
	std::cout << "Raiz Quadrada n2: " << RaizQuadrada(n2) << "\n\n";

	return 0;
}
