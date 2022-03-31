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

	int x, aux = 1;

	while (aux != 0) {
		if(!remover(x)){
			aux = 0;
		}
	}
	
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

	int contador = 0, quant = tamanho();

	while(remover(y)){
		items += " ";
		items += to_string(y);
		contador++;
		auxFila.inserir(y);
		
		if(contador != quant){
			items += " ";
			items += ";";
		}

	}

	while(auxFila.remover(y)){
		inserir(y);
	}

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
	


	return false;
}