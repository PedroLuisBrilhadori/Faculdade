#include <iostream> 

using namespace std;

int main() {

    int i, nmr_conta, transacoes;  
    float valor, min_diario, taxa, saldo;
    char cod_trans;

    saldo = 0;


    cout << "Insira o valor de balanço mínimo: ";
    cin >> min_diario;  
    
    cout << "Insira a quantidade de transações: ";
    cin >> transacoes;

    cout << "Taxa de serviço: ";
    cin >> taxa;


    for (i = 0; i <= transacoes; i++){

        cout << "------------------------------------" << endl;
        cout << "Número da conta: "; 
        cin >> nmr_conta;
        cout << "Valor da transação: R$";
        cin >> valor;
        cout << "Codigo. [D]eposito, [S]aque: ";
        cin >> cod_trans;

        if(cod_trans == 'D' || cod_trans == 'd'){
            saldo += valor;
        } else
            if(cod_trans == 'S' || cod_trans == 's'){
                saldo -= valor;
            }
        
        if (saldo < min_diario){
            saldo = saldo - (saldo * (taxa/100));
            cout << "Conta: " << nmr_conta << " Não há fundos." << endl;
        } else
            cout << "Conta: " << nmr_conta << " R$" << saldo << endl;
    }     

     return 0;
}