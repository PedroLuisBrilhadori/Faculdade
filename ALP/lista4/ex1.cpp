/*
•Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
•A última linha que não entrará nos cálculos, contém o valor da idade igual a zero.
•Calcule e escreva a idade média deste grupo de indivíduos
*/

#include <iostream>

using namespace std;

int main(){
    int i, soma, div, idade;
    float media;

    idade = 1;
    
div = soma = 0;
    cout << "Insira uma idade: ";
    cin >> idade;

    do{
        if (idade > 0){
            soma += idade;
            div++;

            if (idade > 0 && div > 0){
                media = soma / div;
            }
        
            cout << "Insira uma idade: ";
            cin >> idade;
        }
    } while(idade > 0);

    cout << "Méida das idades: " << media << endl;
    
    return 0;
}