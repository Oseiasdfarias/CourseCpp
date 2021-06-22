#pragma once 
#include <iostream>
#include <string>

//este é o arquivo .h, onde existem apenas as declarações dos atributos e métodos da classe. 

class Conta
{
	private:
		std::string Banco;
		int Agencia;
		int NumConta;
		std::string Titular;
		double Saldo;

	public:
		bool Sacar(double Valor);
		void Depositar(double Valor);
		void Transferir(Conta &Destino, double Valor);
		double ConsultarSaldo();
		std::string GetBanco();
		int GetAgencia();
		int GetNumConta();
		std::string GetTitular();
		void SetBanco(std::string Banco);
		void SetAgencia(int Agencia);
		void SetTitular(std::string Titular);
		void SetNumConta(int NumConta);

};
