#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"
 
int main(int argc, char **argv)
{
	std::cout << "A Soma de 10 com 20: " << mat01::Soma(10, 20) << "\n";
	std::cout << "A Soma de 10 com 20*2: " << mat02::Soma(10, 20) << "\n";
	
	return 0;
}
