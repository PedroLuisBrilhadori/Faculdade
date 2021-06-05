#include <iostream>

using namespace std;

int main(){

    int nmr_consumidor, i;
    float preco_kwh, kwh_mes, maior, menor, total_r, total_c, total_i, total, media;
    char consumidor_tipo;

    menor = 400000;
    maior = total_c = total_i = total_r = media = total = 0;

    cout << "Insira o preço do KWh: ";
    cin >> preco_kwh;

    for (i = 1; nmr_consumidor != 0; i++){
        cout << "Insira o número do consumidor: ";
        cin >> nmr_consumidor;

        if (nmr_consumidor != 0){
            cout << "Insira a quantidade de KWh consumido no mês: ";
            cin >> kwh_mes;
            cout << "Codigo, [R]esidencial, [C]omercial, [I]ndustrial ";
            cin >> consumidor_tipo;
            cout << "-------------------------------------------------" << endl;

            if(consumidor_tipo == 'R' || consumidor_tipo == 'C' || consumidor_tipo == 'I'){

                total += kwh_mes; 

                if(consumidor_tipo == 'R'){
                    total_r += kwh_mes;
                } else
                    if(consumidor_tipo == 'C'){
                        total_c += kwh_mes;
                    } else
                        if(consumidor_tipo == 'I'){
                            total_i += kwh_mes;
                        }

                if(kwh_mes > maior){
                    maior = kwh_mes;
                } else
                    if(kwh_mes < menor){
                        menor = kwh_mes;
                    }    
                
                kwh_mes *= preco_kwh;

                cout << "Número do consumidor: " << nmr_consumidor << endl;
                cout << "Total a pagar: R$" << kwh_mes << endl;
                cout << "-----------------------------------------------" << endl;
            } else  
                cout << "Tipo do consumidor inválido."<< endl << "--------------------------------------------";
        }
    }

    media = total / i;

    cout << "---------------------------------------------" << endl;
    cout << "Maior consumo: " << maior << endl;
    cout << "Menor consumo: " << menor << endl;
    cout << "Total de consumo de R: " << total_r << endl;
    cout << "Total de consumo de C: " << total_c << endl;
    cout << "Total de consumo de I: " << total_i << endl;
    cout << "Media geral de consumo: " << media << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}