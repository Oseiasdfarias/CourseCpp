#include <iostream>

int main(int argc, char **argv)
{
	int num = 0;
	std::cout << "\nPares     Impares" << '\n';
	while ( num <= 20)
	{
		if (num % 2 == 0)
		{
			std::cout << num;
		}
		else
		{
			std::cout << "  	 |  " << num << "\n";
		}
		num++;
	}
	std::cout << '\n';
	return 0;
}
