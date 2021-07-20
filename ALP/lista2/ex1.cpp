// Faça um programa que receba três números e seus respectivos pesos,
//  calcule e mostre a média ponderada

#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, p1, p2, p3, media;

	cout << "Insira o primeiro número, e depois seu peso: " << endl;
	cin >> n1 >> p1;

	cout << "Insira o segundo número, e depois seu peso: " << endl;
	cin >> n2 >> p2;

	cout << "Insira o terceiro número, e depois seu peso: " << endl;
	cin >> n3 >> p3;

	media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

	cout << "A media ponderada é: " << media << endl;

	return 0;
}
