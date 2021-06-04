/*
Problemas simples do cotidiano podem representar desafios para o mundo computacional. 
Faça um programa que, dados três números inteiros representando dia,
mês e ano de uma data, imprima qual o dia seguinte.

*/

#include <iostream> 

using namespace std;

int main() {
    int dia, mes, aux, bi, ano;
    float mod4, mod400;

    cout << "Insira um dia: "; 
    cin >> dia;
    cout << "Insira um mês: ";
    cin >> mes; 
    cout << "Insira um ano: ";
    cin >> ano;

    mod4 = ano % 4;
	mod400 = ano % 400;

	if (mod4 == 0 || mod400 == 0)
		bi = 1;
	else
		bi = 0; 

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10){
        if (dia >= 1 && dia <=30){
            dia++;
        } else
            if (dia == 31){
                mes++;
                dia = 01;
            } else
                cout << "Dados inválidos." << endl;
    } else
        if (mes == 4 || mes == 9 || mes == 11){
            if (dia >= 1 && dia <= 29){
                dia++;
            } else
                if (dia == 30) {
                    mes++;
                    dia = 01;
                } else  
                    cout << "Dados inválidos." << endl;
        }

    if (mes == 12){
        if(dia >= 1 && dia <= 30){
            dia++;
        } else
            if(dia == 31){
                mes = 01;
                dia = 01;
                ano++;
            } else
                cout << "Dados inválidos." << endl;
    } 

    if (mes == 2){
        if(bi == 1){
            if(dia >= 1 && dia <=28){
                dia++;
            } else
                if (dia == 29){
                    mes++;
                    dia = 01;
                } else
                    cout << "Dados inválidos." << endl;
        } else
            if (bi == 0){
                if (dia >= 1 && dia <= 27){
                    dia++;
                } else
                    if(dia == 28){
                        mes++;
                        dia = 01;
                    } else
                        cout << "Dados inválidos." << endl;
            }
    } 

    if (mes < 1 && mes > 12)
        cout << "Dados inválidos." << endl;
    else
        cout << "Dia seguinte: " << dia << "/" << mes << "/" << ano << endl;
    
    return 0;
}