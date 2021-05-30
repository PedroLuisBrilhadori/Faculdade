// Faça um algoritmo que leia dois valores inteiros A e B 
// se os valores forem iguais deverá se somar os dois,
// caso contrário multiplique A por B. 
// Ao final de qualquer um dos cálculos 
// deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela

#include <iostream> 

using namespace std;

int main() {

	int a, b, c;

	cout << "Insira o valor de A: " << endl;
	cin >> a;
	cout << "Insira o valor de B: " << endl;
	cin >> b;

	if (a == b){
		c = a + b;
		cout << "O valor de C é: " << c << endl;
	} else
		if (a != b){
			c = a * b;
			cout << "O valor de C é: " << c << endl;
		}
	return 0;
}
