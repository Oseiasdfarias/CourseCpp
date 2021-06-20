#include <iostream>

int main(int argc, char **argv)
{
	int Numero{ 12121 };
	char Letra{ 'a' };


	void *ptrG;
	ptrG = &Letra;

	void *ptrG2;
	ptrG2 = &Numero;

	std::cout << "\nValor apontado por ptrG: " << *(char*)ptrG << "\n";
	std::cout << "Valor apontado por ptrG: " << *(int*)ptrG << "\n\n";
	return 0;
}
