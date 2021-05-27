#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	float horas_trab, sal_min, sal_bruto, imposto, sal_receber;

	// leitura dos dados iniciais
	cout << "Horas trabalhadas: ";
	cin >> horas_trab;
	cout << "Salário Minimo: ";
	cin >> sal_min;

	// Processamento dos cálculos necessários 
	sal_bruto = horas_trab * (sal_min * 0.2);
	imposto = sal_bruto * 0.03;
	sal_receber = sal_bruto - imposto;
	

	// Mostrar resultados
	cout << "------------------------Holerite----" << endl;
	cout << "Salário Bruto....: R$ " << sal_bruto << endl;
	cout << "Imposto..........: R$ " << imposto << endl;
	cout << "Sálario a Receber: R$ " << sal_receber << endl;
	cout << "------------------------------------" << endl;
	
	return 0;
}
