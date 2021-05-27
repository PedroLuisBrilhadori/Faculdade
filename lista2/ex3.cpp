// Faça um programa que receba o salário base de um funcionário,
// calcule e mostre o salário à receber,
// sabendo-se que o mesmo possui uma gratificação de 5,5% 
// sobre o salário base e paga 7% de IR sobre o salário base.

#include <iostream>

using namespace std;

int main() {

	float salario_base, salario_recv;

	cout << "Insira o salário base: " << endl;
	cin >> salario_base;

	salario_recv = salario_base * 0.055;
	salario_base += salario_recv;

	salario_recv = salario_base * 0.07;
	salario_base -= salario_recv;

	cout << salario_base << endl;

	return 0;

}
