// Faça um programa que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a idade da pessoa;
// a idade da mesma em 2050;
 
#include <iostream>

using namespace std; 

int main () {
	int nascimento, ano_atual, idade, idade_nova;

	cout << "Insira sua data de nascimento: ";
	cin >> nascimento;
	cout << "Insira o ano atual: ";
	cin >> ano_atual;

	idade = ano_atual - nascimento;
	idade_nova = 2050 - ano_atual;
	idade_nova += idade;

	cout << "Idade: " << idade << endl;
	cout << "Idade no futuro: " << idade_nova << endl;	

	return 0;
}
