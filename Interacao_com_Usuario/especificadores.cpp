#include <iostream>
#include <string>

int main(int argc, char **argv){
	
	int NumeroInt{ 122 };
	float NumeroFloat{ 23.43 };
	char Caracter{ 'd' };
	std::string Texto{ "Texto da String" };
	std::printf("\nValor do Número Int = %d , Número Float %.2f\nCaracter %c, Texto %s\n\n", NumeroInt, NumeroFloat, Caracter, Texto.c_str());
	std::cout << "Testo da String: " << Texto << '\n' << '\n';

	return 0;
}
