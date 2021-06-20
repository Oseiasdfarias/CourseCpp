#include "mat.h"
#include <cmath>

int Soma(int n1, int n2){
	return n1 + n2;
}

int Subtracao(int n1, int n2){
	return n1 - n2;
}

int Multiplicacao(int n1, int n2){
	return n1 * n2;
}

float Divisao(int n1, int n2){
	return float(n1) / float(n2);
}

int Potencia(int n1, int n2){
	return pow(n1, n2);
}

float RaizQuadrada(int n){
	return sqrt(n);
}
