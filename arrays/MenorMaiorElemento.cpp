#include <iostream>
#include <locale.h>

int main()
{
	int NumElementos;
	int Min, Max;
	int Array[20];

	std::cout << "Digite O número de elementos desejado: ";
	std::cin >> NumElementos;

	for (int i = 0; i < NumElementos; i++)
	{
		std::cout << "Digite o Elemento" << (i + 1) << ": ";
		std::cin >> Array[i];
	}
	Min = Array[0];
	Max = Array[0];

	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}

	std::cout << "\n O Menor Valor digitado foi: " << Min << "\n";
	std::cout << "\n O Maior Valor digitado foi: " << Max << "\n";
	
	return 0;
}

