#include <iostream>

// PROTÓTIPO DA FUNCÃO IsPar
int isPar(int num1);

int main(int argc, char **argv)
{
	int num1;
	std::cout << "Digite um Número Inteiro: ";
	std::cin >> num1;

	if(isPar(num1))
	{
		std::cout << "\nO número " << num1 << " é Par!" << "\n\n";
	}
	else
	{
		std::cout << "\nO número " << num1 << " é Impar!" << "\n\n";
	}
	return 0;
}

int isPar(int num1)
{
	if (num1 % 2 == 0)
		return true;
	return false;
}
