// Faça um programa que receba dois números e mostre o menor.

#include <iostream>

using namespace std;

int main() {
	float n1, n2, menor;

	cout << "Insira o primeiro número: " << endl;
	cin >> n1;
	cout << "Insira o segundo número: " << endl;
	cin >> n2;

	if(n1 < n2)
		cout << "O menor número é: " << n1 << endl;
	else
		if(n2 < n1)
			cout << "O menor número é: " << n2 << endl;
	return 0;
}
