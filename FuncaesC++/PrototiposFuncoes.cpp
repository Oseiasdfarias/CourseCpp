#include <iostream>

int soma(int x, int y);
int sub(int x, int y);

int main(int argc, char **argv)
{
	std::cout << "\nSoma de  2 + 3 = " << soma(2, 3) << "\n";
	std::cout << "Subtração de  2 + 3 = " << sub(2, 3) << "\n\n";
	return 0;
}

int soma(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
