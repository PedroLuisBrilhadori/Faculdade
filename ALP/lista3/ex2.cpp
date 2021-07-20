// Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem
// de acordo com a tabela abaixo
// média 0, 3 | reprovado
// média 3, 7 | Exame
// média 7, 10 | Aprovado

#include <iostream>

using namespace std;

int main () {
	
	float n1, n2, media;

	cout << "Insira a primeira nota: " << endl;
	cin >> n1;
	cout << "Insira a segunda nota: " << endl;
	cin >> n2;

	media = (n1 + n2) / 2;

	if (media >= 0 && media <= 3)
		cout << "Aluno reprovado! Média: " << media << endl;
	else
		if (media >= 3 && media < 7)
			cout << "Aluno terá quer fazer o Exame. A media foi: " << media << endl;	
		else
			if(media >=7 && media <= 10)
				cout << "Aluno aprovado! Média: " << media << endl;
	return 0;
}
