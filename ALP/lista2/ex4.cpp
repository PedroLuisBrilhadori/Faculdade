// Faça um programa que calcule a área de um circulo a partir de seu raio sabendo que: area = piR²

#include <iostream>

using namespace std;

int main() {

	float area, raio;

	cout << "Insira o raio: ";
	cin >> raio;

	raio *= raio;
	area = 3.14 * raio;

	cout << "A àrea é: " << area << endl;

	return 0;
}
