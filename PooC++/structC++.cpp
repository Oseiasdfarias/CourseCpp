#include <iostream>
#include <string>

struct Livro
{
	int ID;
	int Ano;
	std::string Titulo;
	std::string Autor;
	std::string Editora;

};

int main()
{
	Livro livro;
	std::cout << "\n#### Cadastro de Livro ####" << "\n\n";
	
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.ID;
	
	std::cout << "Digite o Ano de lançamento do Livro: ";
	std::cin >> livro.Ano;

	std::cout << "Digite o Titulo do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);

	std::cout << "Digite o Autor do Livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "Digite a Editor do Livro: ";
	std::getline(std::cin, livro.Editora);

	std::cout << "\n\n##### Infos #####" << "\n\n";
	std::cout << "ID: " << livro.ID << "\n";
	std::cout << "Ano: " << livro.Ano << "\n";
	std::cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n\n";

	return 0;
}
