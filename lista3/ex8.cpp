//Tendo como dados de entrada a altura e o sexo de uma pessoa, 
//construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
//● para homens: (72.7 * h) – 58;● para mulheres: (62.1 * h) – 44.7

#include <iostream>

using namespace std;

int main(){
	
	int sexo;
	float altura, peso_ideal;	

	cout << "" << endl;
	cout << "Insira seu sexo---------" << endl;
	cout << "------------------------" << endl;
	cout << "     1 - MASCULINO" << endl;
	cout << "     2 - FEMININO" << endl;
	cout << "------------------------" << endl;
	cin >> sexo;
	
	if (sexo == 1 || sexo == 2) {
		cout << "Insira sua altura: ";
		cin >> altura;
	}

	if (sexo == 1 && altura >= 1)
		peso_ideal = (72.7 * altura) - 58;
	else
		if (sexo == 2 && altura >= 1)
			peso_ideal = (62.1 * altura) - 44.7;
	
	if(sexo == 1 && altura >= 1 || sexo == 2 && altura >= 1)
		cout << "O peso ideal para você é: " << peso_ideal << endl;
	else
		cout << "Dados invalidos." << endl;

	return 0;
}
