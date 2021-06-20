#include <iostream>
#include <array>

// Compilar usando [ g++ -std=c++17 TamanhoVetorFunc.cpp ]

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };

	int TamanhoVetor = std::size(Vetor);
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;

	MostrarVetor(Vetor, TamanhoVetor);
	
	return 0;
}

void MostrarVetor(int Array[], int TamVetor)
{
	
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}
