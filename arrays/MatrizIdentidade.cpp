
#include <iostream>

int main()
{
	int Matriz[5][5];

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (i < j){
				std::cout << " 0 ";
			}
			else if (i == j){
				std::cout << " 1 ";
			}
			else if (i > j){
				std::cout << " 0 ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}
