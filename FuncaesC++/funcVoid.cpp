#include <iostream>

void soma(int x, int y)
{
	std::cout << "A Soma de" << x << " + " << y << " = " << x + y << "\n";
}

int main(int argc, char **argv){

	int Numero1, Numero2;
	std::cout << "Digite um Número Inteiro: ";
	std::cin >> Numero1;
	std::cout << "Digite outro Número: ";
	std::cin >> Numero2;

	int n1 = Numero1 + 1;
	int n2 = Numero2 - 1;

	std::cout << '\n';
	soma(Numero1, Numero2);
	soma(n1, n2);
	std::cout << '\n';

	return 0;
}
