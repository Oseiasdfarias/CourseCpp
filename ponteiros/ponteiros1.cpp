#include <iostream>

int main()
{
	int Numero{ 4096 };
	int *ptr;
	ptr = &Numero;
	//estas duas linhas acima é o mesmo que a linha abaixo
	//int *ptr = &Numero;
	std::cout << "\nValor da Variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da Variavel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endereço de Numero: " << &Numero << "\n";
	std::cout << "\nValor do Endereço que ptr esta carregado na memória RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	   	  	
	return 0;
}
