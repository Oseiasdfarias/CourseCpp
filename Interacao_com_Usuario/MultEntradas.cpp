#include <iostream>

int main(int argc, char **argv){

	int	Num1, Num2, Num3, Num4;
	
	std::cout <<  "Digite Quatro numeros separados por espaco e pressione ENTER: " << '\n';
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma dos valores: " << 	(Num1 + Num2 + Num3 + Num4) << '\n';

	return 0;
}
