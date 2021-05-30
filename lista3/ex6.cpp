// Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto
// se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. 
// Por exemplo: 1988, 1992, 1996

#include <iostream>

using namespace std;

int main(){
	int ano;
	float mod4, mod400;

	cout << "Insira o ano que deseja consultar: ";
	cin >> ano;
	
	mod4 = ano % 4;
	mod400 = ano % 400;

	if (mod4 == 0 || mod400 == 0)
		cout << ano << ". É bissexto." << endl;	
	else
		cout << ano << ". Não é bissexto." << endl;
	return 0;
}
