#include <iostream>
#include <string>
using namespace std;
#define MAX 5

#include "Pilha.cpp"
#include "PilhaChar.cpp"

int main() {
    PilhaChar minhaPilha;

    minhaPilha.empilhar('o');
    minhaPilha.empilhar('s');
    minhaPilha.empilhar('s');
    minhaPilha.empilhar('o');

    int tamanho = 0;
    char palavra[MAX];

    if(minhaPilha.palindromo(palavra, tamanho)){
        cout << "Palavra é um palindromo: ";
        for(int i = 0; i < tamanho; i++){
            cout << palavra[i];
        }
        cout << endl;
    } else {
        cout << "Palavra não é um palindromo \n";
    }

}