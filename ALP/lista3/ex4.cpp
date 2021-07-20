// Faça um programa que receba os dois números e mostre o maior.

#include <iostream>

using namespace std;

int main() {

	float n1, n2;

	cout << "Insira o primeiro número: " << endl;
	cin >> n1;
	cout << "Insira o segundo número: " << endl;
	cin >> n2;

	if(n1 > n2)
		cout << "O maior número é: " << n1 << endl;
	else
		if(n1 < n2)
			cout << "O maior número é: " << n2 << endl;

	return 0;
}
