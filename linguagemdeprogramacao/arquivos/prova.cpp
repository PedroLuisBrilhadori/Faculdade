#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

int main(){
    system("cls");

    char texto[50], aux, fim = 0;

    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for (int i = 0; !feof(arquivo); i++){
        aux = fgetc(arquivo);
        if(aux >= 65 && aux <= 90){
            texto[fim] = aux;
            fim++;
        } else if(aux >= 97 && aux <= 122){
            texto[fim] = aux;
            fim++;
        }
    }

    for(int i = 0; i <= fim; i++){
        cout << texto[i];
    }

    return 0;
}