#include "Lista.h"

Lista::Lista() {
    inicio = nullptr;
    contador = 0;
}

bool Lista::vazia() {
    return inicio == nullptr;
}

bool Lista::cheia() {
     return false;
}

bool Lista::setaPosicao(int posicao, PonteiroElemento &atual) {
    atual = inicio;
    for(int i = 1 ; i < posicao ; i++) {
        atual = atual->proximoElemento;
    }    
    return true;
}

bool Lista::inserir(int posicao, int x) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador + 1) {
        return false;
    }

    p = new elemento;
    p->valor = x;
    
    if (posicao == 1) {
        p->proximoElemento = inicio;
        inicio = p;
    } else {
        setaPosicao(posicao - 1, atual);
        p->proximoElemento = atual->proximoElemento;
        atual->proximoElemento = p;
    }
    contador++;
    return true;    
}

bool Lista::remover(int posicao, int &x) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador) {
        return false;
    }

    if(posicao == 1) {
        p = inicio;
        inicio = inicio->proximoElemento;
    } else {
        setaPosicao(posicao - 1, atual);
        p = atual->proximoElemento;
        atual->proximoElemento = p->proximoElemento;
    }
    x = p->valor;
    delete p;
    contador --;
    
    return true;
}

int Lista::tamanho() {
    return contador;
}

// Implementar

int Lista::minimo() {
    // Método deve retornar o menor valor armazenado na lista.
    // Caso a lista esteja vazia retornar -1.

    if(vazia())
        return -1;
    
    int menor = inicio->valor; 
    PonteiroElemento p = inicio;

    while(p->proximoElemento != nullptr){
        p = p->proximoElemento;
        menor = p->valor < menor ? p->valor : menor;
    }

    return menor;
}

int Lista::maximo() {
    // Método deve retornar o maior valor armazenado na lista.
    // Caso a lista esteja vazia retornar -1.

    if(vazia())
        return -1;
    
    int maior = inicio->valor; 
    PonteiroElemento p = inicio;

    while(p->proximoElemento != nullptr){
        p = p->proximoElemento;
        maior = p->valor > maior ? p->valor : maior;
    }

    return maior;
}

int Lista::media() {
    // Método deve retornar a média dos valores armazenados na lista.
    // Caso a lista esteja vazia retornar -1.

    if(vazia()){
        return -1;
    }

    int media, i;
    media = i = 0; 
    PonteiroElemento p = inicio;

    while(p->proximoElemento != nullptr) {
        p = p->proximoElemento;
        media += p->valor;
    }


    return media/contador;
}
