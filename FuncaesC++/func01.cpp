#include <iostream>

int soma(int x, int y)
{
	return x + y;
}

int main(int argc, char **argv){

	int Numero1, Numero2;
	std::cout << "\nDigite um Número Inteiro: ";
	std::cin >> Numero1;
	std::cout << "Digite outro Número: ";
	std::cin >> Numero2;

	int n1 = Numero1 + 1;
	int n2 = Numero2 - 1;

	std::printf("\nA Soma de %d + %d = %d\n", Numero1, Numero2, soma(Numero1, Numero2));
	std::cout << "Soma de " << n1 << " + "<< n2 << " = " << soma(n1, n2) << "\n\n";

	return 0;
}
