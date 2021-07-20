/* 
Elabore um programa que leia o peso e a altura de um adulto 
e mostre sua condição de acordo com a tabela abaixo. 

imc =  peso / altura²

abaixo de 18.5 | abaixo do peso
entre 18.5 e 25 | peso normal
entre 25 e 30 | acima do peso
acima de 30 | obeso
*/

#include <iostream>

using namespace std;

int main(){
    float peso, altura, imc;

    cout << "Insira o seu peso: ";
    cin >> peso;

    if (peso > 0){
        cout << "Insira a sua altura: ";
        cin >> altura;
    }
    
    if (peso > 0 && altura > 0) {
        imc = peso / (altura * altura);

    if (imc <= 18.5)
        cout << "Você está abaixo do peso, seu imc: " << imc << endl;
    else
        if(imc > 18.5 && imc <= 25)
            cout << "Você está no peso ideal, seu imc: " << imc << endl;
        else
            if(imc > 25 && imc <= 30)
                cout << "Você está no peso ideal, seu imc: " << imc << endl;
            else
                if(imc > 30)
                    cout << "Você está obeso, seu imc: " << imc << endl;
                else
                    cout << "Erro :/" << endl;
    } else 
        cout << "Dados Inválidos." << endl;
    return 0;
}