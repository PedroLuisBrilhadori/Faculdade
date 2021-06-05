#include <iostream> 

using namespace std;

int main() {

    int i, ingressos, qnt_ingressos;
    float preco, lucro, max_lucro, preco_max;

    max_lucro = 0;
    ingressos = 94;
    preco = 5.0;

    for (lucro = 0; preco >= 1.0;){
        lucro = 0;
        ingressos += 26;


        for (i = 1; i <= ingressos; i++){
            lucro += preco;
        }
        lucro -= 200;

        if (lucro > max_lucro){
            max_lucro = lucro;
            preco_max = preco;
            qnt_ingressos = ingressos;
        }


        cout << "-----------------------------------" << endl;
        cout << "Com o preço do ingresso: R$" << preco << endl;
        cout << "O lucro será: R$" << lucro << endl;
        preco -= 0.50;
    }

    cout << "-----------------------------------" << endl;

    cout << "Lucro máximo esperado: R$" << max_lucro << endl;
    cout << "Preço do ingresso: R$" << preco_max << endl;
    cout << "Número de ingressos vendidos: " << qnt_ingressos << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}