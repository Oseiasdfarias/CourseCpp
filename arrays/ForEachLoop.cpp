#include <iostream>

int main(int argc, char **argv)
{
	int Anos[] {1993, 2000, 2012, 2021, 2022};
	for (auto Ano: Anos){
		std::cout << "Ano de " << Ano << "\n";
	}
	return 0;
}
