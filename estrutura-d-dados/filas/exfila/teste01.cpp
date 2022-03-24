#include <iostream>
#include "Fila.cpp"


//	Altere a classe que implementa a fila adicionando os seguintes m�todos:
//  a.	Um m�todo primeiro que deve retornar o primeiro elemento da fila;
//  b.	Um m�todo �ltimo que deve retornar o �ltimo elemento da fila;
//  c.	Um m�todo esvaziar que remova todos os elementos da fila;
//  d.	Um m�todo tamanho que retorne o tamanho atual da fila;
//  e.	Um m�todo inverter que inverta a ordem dos elementos atuais da fila;
//  f.	Um m�todo listar que retorne um vetor contendo todos os elementos da fila;
//  g.	Um m�todo que verifica se um dado valor se encontra na fila;
//  h.	Um m�todo que receba uma lista e retorne a intersec��o com essa lista;
//  i.	Um m�todo que receba uma lista e retorne a uni�o com essa lista;
//
// Implementar utilizando sempre somente os met�dos inserir e remover.


using namespace std;

int main() {
    Fila minhaFila, fila01, fila02;
    int x, y;

    minhaFila.inserir(1);
    minhaFila.inserir(3);
    minhaFila.inserir(2);

    minhaFila.primeiro(x);
    cout << "Primeiro item: " << x << endl;

    minhaFila.ultimo(x);
    cout << "Ultimo item: " << x << endl;

    
    //fila02 = minhaFila.interseccao(fila01);
    //cout << fila02.listar();
    
}
