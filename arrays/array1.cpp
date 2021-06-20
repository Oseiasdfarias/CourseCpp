#include <iostream>
#include <string>

int main()
{

	float Notas[5] { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
	}

	Media = Soma/5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	return 0;
}

