/*
Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas.
Fazer um algoritmo que calcule e escreva:
•a maior e a menor altura do grupo;
•a média de altura das mulheres;
•o número de homens;
*/

#include <iostream>

using namespace std;

int main() {
    char sexo;
    int quant_H, i, div;
    float altura, menor, maior, media_M, soma;

    quant_H = altura  = maior = media_M = div = 0;
    menor = 4;

    cout << "Insira o sexo [M = masculino | F = feminino] ";
    cin >> sexo;
    cout << "Insira a altura: ";
    cin >> altura;

    for (i = 1; i <= 49; i++){
        if(altura > maior){
            maior = altura;
        } else
            if (altura < menor){
                menor = altura;
            }
        if (sexo == 'F' || sexo == 'f'){
            // media 
            div++;
            soma += altura;
            media_M = soma / div;
        } else 
            if (sexo == 'M' || sexo == 'm'){
                quant_H++;
            }

        cout << "Insira o sexo [M = masculino | F = feminino] ";
        cin >> sexo;
        cout << "Insira a altura: ";
        cin >> altura;
    }

    cout << "-----------------------------" << endl;
    cout << "    Maior Altura: " << maior << endl;
    cout << "    Menor Altura: " << menor << endl;
    cout << " Média de altura[F]:" << media_M << endl;
    cout << "   Número de Homens: " << quant_H << endl;
    cout << "-----------------------------" << endl;

    return 0;
}