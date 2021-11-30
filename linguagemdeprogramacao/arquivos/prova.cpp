#include <iostream>
#include <windows.h>
#include <string.h>

#define TAM 50

using namespace std;

int leArquivo(char * texto) {
    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    int fim;
    char aux;

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

    fclose(arquivo);

    return fim;
}

void escreveArquivo(char * texto, int fim){
    FILE *arquivo;
    arquivo = fopen("texto.txt","w");

    for(int i = 0; i < fim; i++){
        fputc(texto[i], arquivo);
    }

    fclose(arquivo);
}

void criptografar(char * texto, int tam){
    for(int i = 0; i < tam; i++){
        if(texto[i] != 32)
            texto[i] = texto[i] + 3;
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

    int flag;
    char texto[TAM];
    int fim = leArquivo(texto);

    do{
        cout << "------------- Menu -------------\n";
        cout << "1 - CRIPTOGRAFAR \n";
        cout << "2 - DESCRIPTOGRAFAR \n";
        cout << "3 - IMPRIMIR \n";
        cout << "9 - SAIR \n";
        cout << "--------------------------------\n";

        fflush(stdin);
        cin >> flag;

        switch (flag){
        case 1:
            criptografar(texto, fim);
            escreveArquivo(texto, fim);
            leArquivo(texto);
            break;
        case 2:
            descriptografar(texto, fim);
            escreveArquivo(texto, fim);
            leArquivo(texto);
            break;
        case 3: 
            imprimir(texto, fim);
            break;
        default:
            flag = 9;
            break;
        }
    } while(flag != 9);

    return 0;
}