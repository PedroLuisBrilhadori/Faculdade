#include <cstdlib>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;

    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


bool Fila::primeiro(int &x) {
	if(vazia()){
		return false;
	}

	x = inicio->valor;
	return true;
}


bool Fila::ultimo(int &x) {

	if(vazia()){
		return false;
	}

	x = fim->valor;
	return true;
}

bool Fila::esvaziar(){
	if(vazia()){
		return false;
	}

	int x;
	while (remover(x)) {}
	
	return true;
}

int Fila::tamanho() {
	if(vazia()){
		return 0;
	}

	int quantidade = 1;
	PonteiroElemento item = inicio;
	
	do{
		item = item->proximoElemento;
		quantidade++;
		
	}while(item->proximoElemento != NULL);

	return quantidade;
}


bool Fila::inverter() {
	if(vazia()){
		return false;
	}

	int y, quant = tamanho();
	int itens[quant];
	int contador = quant - 1;


	while (remover(y)) {
		itens[contador] = y;
		contador--;

	}

	contador = quant - 1;

	while (contador >= 0){
		inserir(itens[contador]);
		contador--;
	}

	return true;
}

string Fila::listar() {
	if(vazia()){
		return "";
	}
	
	int y;
	string items = "";
	Fila auxFila; 


	while(remover(y)){
		items +=  to_string(y) + " ; ";
		auxFila.inserir(y);		
	}

	while(auxFila.remover(y)){
		inserir(y);
	}

	items.pop_back();
    items.pop_back();
    items.pop_back();

	return items;
}

bool Fila::estaNaFila(int x) {
	if(vazia()){
		return false;
	}

	PonteiroElemento item = inicio;

	while (item->proximoElemento != NULL){
		if(item->valor == x)
			return true;
		
		item = item->proximoElemento;
	}


	if (item->valor == x){
		return true;
	} 


	return false;
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersec��o com a lista atual
	// elementos em comum com as 2 listas
	// sem repeti��o de elementos
	// seu c�digo aqui:

	PonteiroElemento item = inicio;
	Fila inter, filaAux; 
	int y;

	if(vazia() || auxFila.vazia()){
		return inter;
	}

	while(auxFila.remover(y)){		
		if(estaNaFila(y) && !inter.estaNaFila(y)){
			inter.inserir(y);
		}		
		filaAux.inserir(y);
	}
	
	while (filaAux.remover(y)){
		auxFila.inserir(y);
	}

	return inter;

}