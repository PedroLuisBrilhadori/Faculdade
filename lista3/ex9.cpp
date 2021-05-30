#include <iostream>

using namespace std;

int main () 
{
	float preco_normal, preco_final, juros, desconto;
	int cond_pagamento, parcelas;

	cout << "----------CAIXA----------" << endl;
	cout << "Valor do produto: ";
	cin >> preco_normal;
	cout << "--- FORMA DE PAGAMENTO ---" << endl;
	cout << "\t(1) - À vista" << endl;
	cout << "\t(2) - À vista no crédito" << endl;
	cout << "\t(3) - 2 parcelas sem juros" << endl;
	cout << "\t(4) - 3 parcelas" << endl;
	cout << "Escolha uma opção: " << endl;
	cin >> cond_pagamento;


	parcelas = juros = desconto = 0;
	switch(cond_pagamento){
		case 1:
		       	juros = 0;
			desconto = 0.1;
			break;
		case 2:
		       	juros = 0;
			desconto = 0.15;
			break;
		case 3:
			parcelas = 2;
			break;
		case 4:
			juros = 0.1;
			parcelas = 3;
			break;
		default:
			cout << "Opção inválida, compra cancelada!!" << endl;
			break;
	}

	if (cond_pagamento >= 1 && cond_pagamento <=4){	

		preco_final = preco_normal - (preco_normal * desconto) + (preco_normal * juros);

		cout << "------------- NOTA ---------------" << endl;
		cout << "\tPreço R$ " << preco_normal << endl;
		if(desconto > 0)
			cout << "\tDesconto " << desconto * 100 << "%" << endl;
		if (juros > 0)
			cout << "\tJuros: " << juros*100 << "%" << endl;
		if (parcelas > 0){
			cout << "\tParcelas: " << parcelas << endl;
			cout << "\tno valor: R$" << preco_final / parcelas << endl;	
		}
		cout << "Total: R$ " << preco_final << endl;
		cout << "-----------------------------------" << endl;
	}
}

