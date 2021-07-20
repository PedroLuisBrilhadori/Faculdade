// Uma empresa vende o mesmo produto para quatro diferentes estados. 
// Cada estado possui uma taxa diferente de imposto sobre o produto 
// (MG 7%; SP 12%; RJ 15%; MS 8%). 
// Faça um programa em que o usuário 
// entre com o valor e o estado destino do produto e 
// o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
//Se o estado digitado não for válido, mostrar uma mensagem de erro

#include <iostream>

using namespace std;

int main () {

	int est;
	float valor_prod, valor_final;
	
	cout << "----------Camisa-Bacana------------" << endl;
	cout << "SELECIONE-UM-ESTADO----------------" << endl;
	cout << "\t1--MG----------------------" << endl;
	cout << "\t2--SP----------------------" << endl;
	cout << "\t3--RJ----------------------" << endl;
	cout << "\t4--MS----------------------" << endl;
	cout << "-----------------------------------" << endl;
	cin >> est;
	
	cout << "INFORME O VALOR DO PRODUTO: R$";
	cin >> valor_prod;
	valor_final = valor_prod;
	switch(est){
	
		case 1:
			valor_prod *= 0.07;
			valor_final += valor_prod;
			break;
		case 2:
			valor_prod *= 0.12;
			valor_final += valor_prod;
			break;
		case 3:
			valor_prod *= 0.15;
			valor_final += valor_prod;
			break;
		case 4:
			valor_prod *= 0.08;
			valor_final += valor_prod;
			break;
		default:
			cout << "ESTADO INVÁLIDO!" << endl;
			break;
	}
	
	if (est >= 1 && est <=4){
		cout << "O valor do produto será: R$" << valor_final << endl; 
	}
	return 0;
}

