#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

int main(){

    char texto[30];

    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for (int i = 0; !feof(arquivo); i++){
        texto[i] = fgetc(arquivo);
        cout << texto[i];
    }

    return 0;
}