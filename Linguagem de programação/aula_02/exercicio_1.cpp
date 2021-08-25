/*
calcule a média e informe se o aluno está aprovado, reprovado ou de exame seguindo os seguintes critérios: 
Aprovado: média >=6, 
reprovado: média < 3 e exame média entre um número maior ou igual a 3 e menor do que 6.
*/

#include <iostream> 
#include <math.h>

using namespace std;

int main () {

    float n1, n2, media; 

    cout << "Insira a primeira nota: ";
    fflush(stdin);
    cin >> n1;
    cout << "Insira a segunda nota: ";
    fflush(stdin);
    cin >> n2;

    media = (n1 + n2) / 2;

    if(media >= 6)
        cout << "Aluno aprovado com media: " << media << endl;
    else 
        if(media >= 3 && media < 6)
            cout << "Aluno precisa de um exame, media: " << media << endl;
        else 
            if(media < 3)
                cout << "Aluno reprovado com media: " << media << endl;
    
    return 0;
}