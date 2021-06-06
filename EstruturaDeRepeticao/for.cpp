#include <iostream>

int main()
{
	int soma = 0, vfinal;
	std::cout << "Digite um valor inteiro: ";
	std::cin >> vfinal;
	for (int num = 1; num <= vfinal; num++)
	{
		soma = soma + num;
	}
	std::cout << "\nA soma dos numeros de 1 a " << vfinal << ": " << soma << "\n\n";
	return 0;
}
