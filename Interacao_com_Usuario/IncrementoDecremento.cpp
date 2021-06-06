
#include <iostream>

int main()
{
	int Num1{ 10 }, Num2{ 20 }, Resultado;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = Num1++;

	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	/*Num1 Recebe (Num2+1) + (Num1+1) préfixado!*/
	Num1 = ++Num2 + Num1++;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num2;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num2 + Num2--;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = --Num1 - --Num2;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = --Num2 + Num1--;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";

	return 0;
}
