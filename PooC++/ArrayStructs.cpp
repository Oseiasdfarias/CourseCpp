#include <iostream>
#include <string>

struct Livro{

	std::string Titulo;
	std::string Autor;

};

int main(int argc, char **argv)
{
	Livro livro[3];

    for (int i = 0; i < 3; i++)
    {

	    std::cout << "Digite o nome do livro: ";
	    std::getline(std::cin, livro[i].Autor);
    
	    std::cout << "Digite o nome do Autor: ";
	    std::getline(std::cin, livro[i].Titulo);
    
        std::cout << "\n-----------------------------\n";
    }

    for (int j = 0; j < 3; j++)
    {
	    std::cout << "\n------------ INFOS ------------" << "\n\n";
	    std::cout << "Materia2: " << livro[j].Autor << "\n";
	    std::cout << "Materia1: " << livro[j].Titulo << "\n";
        std::cout << "\n ------------------------------- \n";

    }

	return 0;
}
