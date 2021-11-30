#include <iostream>
#include <windows.h>
#include <string.h>

#define TAM 50

using namespace std;

void criptografar(char * texto, char * cripto, int tam){
    for(int i = 0; i < tam; i++){
        if(texto[i] != 32)
            cripto[i] = texto[i] + 3;
        else 
            cripto[i] = texto[i];       
    }
}

void descriptografar(char * cripto, int tam){
    for(int i = 0; i < tam; i++){
        if(cripto[i] != 32)
            cripto[i] = cripto[i] - 3;
    }
}

void imprimir (char * imprime, int fim){
    for(int i = 0; i <= fim; i++){
        cout << imprime[i];
    }
    cout << "\n";
}

int main(){
    system("cls");

    char texto[TAM], cripto[TAM], aux, fim = 0;

    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for (int i = 0; !feof(arquivo); i++){
        aux = fgetc(arquivo);
        if(aux >= 65 && aux <= 90 || aux == 32){
            texto[fim] = aux;
            fim++;
        } else if(aux >= 97 && aux <= 122 || aux == 32){
            texto[fim] = aux;
            fim++;
        }
    }

    criptografar(texto, cripto, fim);
    imprimir(cripto, fim);

    descriptografar(cripto, fim);
    imprimir(cripto, fim);

    return 0;
}