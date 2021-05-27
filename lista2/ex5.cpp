// Sabe se que 
// 1 pé = 12 polegadas
// 1 jarda = 3 pés 
// 1 milha = 1760 jardas
// Faça um programa que receba uma medida em pés e converte para jardas e milhas.

#include <iostream>

using namespace std;

int main(){

	float pes, jardas, milhas;

	cout << "Insira distancia em pés: ";
	cin  >> pes;
	
	jardas = pes / 3;
	milhas = jardas / 1760;

	cout << "----------Distancia-----------" << endl;
	cout << "      Milhas.....:" << milhas << endl;
	cout << "      Jardas.....:" << jardas << endl;
	cout << "      Pés........:" << pes << endl;
	cout << "------------------------------" << endl;	
	
	return 0;
}
