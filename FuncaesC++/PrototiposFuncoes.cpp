#include <iostream>

int soma(int x, int y);

int main(int argc, char **argv)
{
	std::cout << "Soma de  2 + 3 = " << soma(2, 3) << "\n";
	return 0;
}

int soma(int x, int y)
{
	return x + y;
}
