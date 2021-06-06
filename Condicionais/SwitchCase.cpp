#include <iostream>

int main(int argc, char **argv)
{
	int num1, num2;
	char Operacao;

	std::cout << "Digite um número: ";
	std::cin >> num1;	
	std::cout << "Digite outro número: ";
	std::cin >> num2;	

	std::cout << "\nQual operação deseja efetuar?\n" << '\n' <<
		 "+ Adição \n- Subtração \n* Multiplicação \n/ Divisão\n";
	std::cout << "\nDigite sua Opção: ";
	std::cin >> Operacao;
	
	switch (Operacao) 
	{
		case '+':
			std::cout << "\nSoma de Num1 + Num2 = " << num1 + num2 << "\n\n";
			break;
		case '-':
			std::cout << "\nSubtração de Num1 - Num2 = " << num1 - num2 << "\n\n";
			break;
		case '*':
			std::cout << "\nMultiplicação de Num1 * Num2 = " << num1 * num2 << "\n\n";
			break;
		case '/':
			std::cout << "\nDivisão de Num1 / Num2 = " << num1 / num2 << "\n\n";
			break;
		default:
			std::cout << "\nOBS: Você não digitou um Operador válido!!!" << "\n\n";
			break;
	}

	return 0;
}
