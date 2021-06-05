#include <iostream>

int main(int argc, char **argv){
	int NumVidas = 5;
	int Score = 1224;
	std::cout << "\n***************\n" << '\n';
	std::cout << "Vidas Jogador: " << NumVidas << '\n';
	std::cout << "Pontuação: " << Score << '\n';
	std::cout << "Endereço de Memória de NumVidas :" << &NumVidas << '\n';
	std::cout << "\n***************\n" << '\n';
	return 0;
}
