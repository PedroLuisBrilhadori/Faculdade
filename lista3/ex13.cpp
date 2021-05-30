/* 
dado o valor total em reais e o número de prestações desejadas,
calcule o valor de cada prestação.
O número mínimo de prestações deve ser 12. 
Se o número de prestações for maior ou igual a 24, adicione 10% de juros ao valor total,
se for maior ou igual a 36, adicione 15% de juros ao valor total
*/

#include <iostream>

using namespace std;

int main () {

    int prestacoes;
    float valor_ps, valor;

    cout << "Insira o valor do produto: R$";
    cin >> valor;
    cout << "Insira a quantidade de prestações: ";
    cin >> prestacoes;

    if(prestacoes >= 12 && prestacoes < 24){
        valor_ps = valor / prestacoes;
    } else
        if(prestacoes >= 24 && prestacoes < 36){
            valor_ps = valor * 0.1;
            valor += valor_ps;
            valor_ps = valor / prestacoes;
        } else
            if (prestacoes >= 36){
                valor_ps = valor * 0.15;
                valor += valor_ps;
                valor_ps = valor / prestacoes;
            }

    if (prestacoes >= 12){
        cout << "O valor das prestações será: R$" << valor_ps << endl;
    } else
        cout << "Dados inválidos." << endl;

    return 0;
}