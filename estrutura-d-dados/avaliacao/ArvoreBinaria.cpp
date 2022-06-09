
#include "ArvoreBinaria.h"

ArvoreBinaria::ArvoreBinaria() {
    raiz = nullptr;
}

bool ArvoreBinaria::vazia() {
    return raiz == nullptr;
}

bool ArvoreBinaria::cheia() {
    return false;
}

void ArvoreBinaria::inserir(int x) {
    PonteiroElemento p = nullptr, q=raiz, r;
    while (q != nullptr) {
        p = q; 
        if (x < q->valor) {
            q = q->elementoEsquerda;
        } else {
            q = q->elementoDireita;
        }
    }
    r = new elemento;
    r->valor = x;
    r->elementoEsquerda = nullptr;
    r->elementoDireita = nullptr;

    if (p == nullptr) {
        raiz = r;
    } else {
        if (x < p->valor) {
            p->elementoEsquerda = r;
        } else {
            p->elementoDireita = r;
        }
    }
}

// Método Público
int ArvoreBinaria::totalElementos() {
    return totalElementos(raiz);
}

// Método Privado
int ArvoreBinaria::totalElementos(PonteiroElemento &e) { 
    if (e == nullptr) {
        return 0;
    } else {
        int E, D;
        E = totalElementos(e->elementoEsquerda);
        D = totalElementos(e->elementoDireita);
        return 1 + E + D;
    }
}

// Método Público
int ArvoreBinaria::totalFolhas() { 
    return totalFolhas(raiz);
}

// Método Privado
int ArvoreBinaria::totalFolhas(PonteiroElemento &e) {
    if (e == nullptr) {
        return 0;
    } else {
        if (e->elementoEsquerda == nullptr and e->elementoDireita == nullptr) {
            return 1;
        } else {
            int E, D;
            E = totalFolhas(e->elementoEsquerda);
            D = totalFolhas(e->elementoDireita);
            return E + D;
        }
    }
}

// Método Público
int ArvoreBinaria::altura() { 
    return altura(raiz);
}

// Método Privado
int ArvoreBinaria::altura(PonteiroElemento &e) { 
    if (e == nullptr) {
        return -1;
    } else {
        int E, D;
        E = altura(e->elementoEsquerda);
        D = altura(e->elementoDireita);
        if (E > D) {
            return E + 1;
        }  else {
            return D + 1;
        }
    }
}

// Método Público
string ArvoreBinaria::listarPreOrdem() {
    return listarPreOrdem(raiz);
}

// Método Privado
string ArvoreBinaria::listarPreOrdem(PonteiroElemento &e)
{ 
    string ret;
    if (e != nullptr) {
        ret = ret + "[" + to_string(e->valor) + "]";
        //cout << e->valor << "\n";
        ret = ret + listarPreOrdem(e->elementoEsquerda);
        ret = ret + listarPreOrdem(e->elementoDireita);
    }
    return ret;
}


// Método Público
string ArvoreBinaria::listarInOrdem() {
    return listarInOrdem(raiz);
}

// Método Privado
string ArvoreBinaria::listarInOrdem(PonteiroElemento &e)
{ 
    string ret;
    if (e != nullptr) {
        ret = ret + listarInOrdem(e->elementoEsquerda);
        ret = ret + "[" + to_string(e->valor) + "]";
        ret = ret + listarInOrdem(e->elementoDireita);
    }
    return ret;
}



// Método Público
string ArvoreBinaria::listarPosOrdem() {
    return listarPosOrdem(raiz);
}

// Método Privado
string ArvoreBinaria::listarPosOrdem(PonteiroElemento &e)
{ 
    string ret;
    if (e != nullptr) {
        ret = ret + listarPosOrdem(e->elementoEsquerda);
        ret = ret + listarPosOrdem(e->elementoDireita);
        ret = ret + "[" + to_string(e->valor) + "]";
    }
    return ret;
}




// Método Público
bool ArvoreBinaria::estritamenteBinaria() {
    return estritamenteBinaria(raiz);
}

// Método Privado
bool ArvoreBinaria::estritamenteBinaria(PonteiroElemento &e)
{ 

    if (e == nullptr) {
        return true;
    }

    if ((e->elementoEsquerda == nullptr && e->elementoDireita != nullptr) || (e->elementoEsquerda != nullptr && e->elementoDireita == nullptr)) {
        return false;
    }

    return estritamenteBinaria(e->elementoEsquerda) && estritamenteBinaria(e->elementoDireita);



}


// Método Público
bool ArvoreBinaria::completa() {
    
    if (vazia()) {
        return true;       
    }
    
    int tot=0;
    for (int i = 0 ; i <= altura() ; i++) {
        tot = tot + pow(2, i);
    }
    
    //cout << tot << "\n";
    //cout << totalElementos() << "\n";
    if (tot == totalElementos()) {
        return true;
    }


    return false;
}

int ArvoreBinaria::minimo() {
    return minimo(raiz);
}

int ArvoreBinaria::maximo() {
    return maximo(raiz);
}


// Implementar

int ArvoreBinaria::minimo(PonteiroElemento &e) {
    // Método deve retornar o menor valor armazenado na árvore.
    // Caso a árvore esteja vazia retornar -1.
    if(vazia())
       return -1;

    int menor = e->valor;
    PonteiroElemento p = e;

    while (p->elementoEsquerda != nullptr){   
        p = p->elementoEsquerda; 
        menor = p->valor;
    }

    return menor;
}

int ArvoreBinaria::maximo(PonteiroElemento &e) {
    // Método deve retornar o maior valor armazenado na árvore.
    // Caso a árvore esteja vazia retornar -1.

    if(vazia())
        return -1;

    int maior = e->valor;
    PonteiroElemento p = e;

    while (p->elementoDireita != nullptr){
        p = p->elementoDireita;
        maior = p->valor;
    }

    return maior;
}

int ArvoreBinaria::soma(PonteiroElemento &e) {
    // Método deve retornar a soma dos valores armazenados na árvore.
    // Caso a árvore esteja vazia retornar -1.
    // Método auxiliar para o cálculo da média.
    if(vazia())
        return -1;

    int total = 0;

    if(e != nullptr){
        total = e->valor + soma(e->elementoDireita) + soma(e->elementoEsquerda);
    }

    return total;

}

int ArvoreBinaria::media() {
    // Método deve retornar a média dos valores armazenados na árvore.
    // Caso a árvore esteja vazia retornar -1.
    int somaTotal = soma(raiz);

    int total = totalElementos();

    if(total)
        return somaTotal / total;
    
    return -1;
}
