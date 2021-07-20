/* 
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
Para isto, mandou digitar uma linha para cada mercadoria com nome, 
preço de compra e preço de venda das mesmas. 
Fazer um algoritmo que: determine e escreva quantas mercadorias proporcionam: 
lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. 
Determine e escreva o valor total de compra e de venda de todas as mercadorias, 
assim como o lucro total.
Observação: o aluno deve adotar um flag

*/

#include <iostream> 
#include <string>

using namespace std;

int main() {
    
    string nome;
    char flag;
    int lucrinho, lucro10_20, lucrao, i, s;
    float compra, venda, diferenca, compra_total, venda_total, lucro;
    
    s = lucrinho = lucro10_20 = lucrao = compra_total = venda_total = lucro = 0;

    for (i = 0; i != 1;){

        cout << "Nome do Produto: ";
        cin >> nome;
        cout << "Preço de venda: R$";
        cin >> venda;
        cout << "Preço de compra: R$";
        cin >> compra;

        diferenca = venda - compra;
        lucro = diferenca / compra;

        venda_total += venda;
        compra_total += compra;

        if (lucro < 0.1)
            lucrinho += 1;
        else    
            if(lucro >= 0.1 && lucro <= 0.2)
                lucro10_20 += 1;
            else
                if (lucro > 0.2)
                    lucrao += 1;

        cout << "Deseja adicionar mais produtos? [S = sim, N = não]" << endl;         
        cin >> flag;

        do{
            if (flag == 'S' || flag == 's'){
                i = 0;
                s = 1;
                break;
            }
            else
                if (flag == 'N' || flag == 'n'){
                    i = 1;
                    s = 1;
                    break;
                }
                else 
                    cout << "Comando inválido." << endl;  
                    cout << "Deseja adicionar mais produtos? [S = sim, N = não]" << endl; 
                    cin >> flag;
        } while (s == 0);

    }

    diferenca = venda_total - compra_total;

    cout << "|--------------------------------------------|" << endl;
    cout << "|      Valor total de compra: R$" << compra_total << endl;
    cout << "|      Valor total de venda: R$" << venda_total << endl;
    cout << "|      Lucro total: R$" << diferenca << endl;
    cout << "|   Produtos com lucro abaixo de 10%: " << lucrinho << endl;
    cout << "|   Produtos com lucro entre 10% e 20%: " << lucro10_20 << endl;
    cout << "|   Produtos com lucro acima de 20%: " << lucrao << endl;
    cout << "|--------------------------------------------|" << endl;
    
    return 0;
}