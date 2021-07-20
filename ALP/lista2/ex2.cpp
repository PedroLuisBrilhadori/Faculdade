// Faça um programa que receba o salário de um funcionário,
// calcule e mostre o novo salário, 
// sabendo-se que o mesmo sofreu um aumento de 25%.

#include <iostream>

using namespace std;

int main() {
	
	float salario, reajuste, salario_novo;

	cout << "Insira o salario do funcionario: " << endl;
	cin >> salario;

	reajuste = salario * 0.25;
	salario_novo = salario + reajuste;

	cout << "O novo salário é: " <<  salario_novo << endl;
	
	return 0;
}
