#include <iostream>
#include <string>

struct EngEletrica{

	std::string Materia1;
	std::string Materia2;
	std::string Materia3;
	std::string Materia4;

};

int main(int argc, char **argv)
{
	EngEletrica Eng1;

	std::cout << "\nDigite a Primeira matéria1: ";
	//std::cin.ignore();
	std::getline(std::cin, Eng1.Materia1);

	std::cout << "Digite a Primeira matéria2: ";
	std::getline(std::cin, Eng1.Materia2);

	std::cout << "Digite a Primeira matéria3: ";
	std::getline(std::cin, Eng1.Materia3);

	std::cout << "Digite a Primeira matéria4: ";
	std::getline(std::cin, Eng1.Materia4);

	std::cout << "\n##### INFOS #####" << "\n\n";
	std::cout << "Materia1: " << Eng1.Materia1 << "\n";
	std::cout << "Materia2: " << Eng1.Materia2 << "\n";
	std::cout << "Materia3: " << Eng1.Materia3 << "\n";
	std::cout << "Materia4: " << Eng1.Materia4 << "\n\n";

	return 0;
}
