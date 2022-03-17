
#include "PilhaChar.h"


PilhaChar::PilhaChar() {
    contador = 0;
    capacidade = MAX;
}

bool PilhaChar::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool PilhaChar::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool PilhaChar::empilhar(char valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool PilhaChar::desempilhar(char &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool PilhaChar::retornaTopo(char &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

bool PilhaChar::invertePilha() {
    if(vazia()){
        return false;
    }
    

    int inverte[contador];
    
    for(int i = 0; i < contador; i++){
        inverte[i] = conteudo[contador - i -1];
    }

    for(int i = 0; i < contador; i++){
        conteudo[i] = inverte[i];
    }

    return true;
}

bool PilhaChar::palindromo(char palavra[MAX], int &tamanho) {
    if(vazia()){
        return false;
    }
    
    
    for(int i = 0; i < contador; i++) {
        palavra[i] = conteudo[i];
    }

    if(!invertePilha()){
        return false;
    }

    tamanho = 0;
    
    for(int i = 0; i < contador; i++){
        if(palavra[i] != conteudo[i]){
            return false;
        }
        tamanho++;
    }

    return true;
}

void PilhaChar::exibePilha() {
    if(vazia()){
        cout << "Pilha Vazia. \n";
        return;
    }
    
    cout << "Pilha: ";
    for(int i = 0; i < contador; i++) {
        cout << conteudo[i] << " "; 
    }

    cout << "\n";
}
