#include "Conta.h"
#include <iostream>
#include <string>

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente!" << "\n";
		std::cout << "Seu Saldo Atual: "<< ConsultarSaldo() << "\n";
		return false;
	}

	else
	{

	Saldo = Saldo - Valor;
	std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";
	return true;

	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n" << "\n";
}

void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente!" << "\n";
	}
	else
	{
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n****Dados****" << "\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agência: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência REalizada com Sucesso!" << "\n";
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";

	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::SetBanco(std::string Banco)
{
	this -> Banco = Banco;
	
}

void Conta::SetAgencia(int Agencia)
{
	this -> Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this -> NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this-> Titular = Titular;
}
