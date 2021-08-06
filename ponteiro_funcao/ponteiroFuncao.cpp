#include <iostream>

bool isGreater(int a, int b);

int main(int argc, char **argv)
{
	auto fn_address = isGreater; // get the address of the function
	auto fn_address1 = isGreater; // get the address of the function
	printf("Function address: %p\n", fn_address);
	printf("Function address1: %p\n", fn_address1);
	
	return 0;
}

// A function which returns true if a > b else false
bool isGreater(int a, int b)
{
	return a > b;
}

