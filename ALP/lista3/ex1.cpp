// Faça um programa que receba quatro notas de um aluno, calcule e mostre a média
// aritmética, por fim escreva se ele foi aprovado ou reprovado, considerando que para ser
// aprovado a média deverá  ser meior ou igual à 7.0;

#include <iostream>

using namespace std;

int main (){
	float n1, n2, n3, n4, media;

	cout << "Insira a primeira nota: " << endl;
	cin >> n1;
	cout << "Insira a seguda nota: " << endl;
	cin >> n2;
	cout << "Insira a terceira nota: " << endl;
	cin >> n3;
	cout << "Insira a quarta nota: " << endl;
	cin >> n4;

	media = (n1 + n2 + n3 + n4) / 4;

	if (media >= 7.0)
		cout << "Aprovado com média: " << media << endl;
	else
		cout << "Reprovado com média: " << media << endl;

	return 0;
}
