/* 
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
Dada a massa inicial, em gramas, fazer um algoritmo que determine o 
tempo necessário para que essa massa se torne menor do que 0,5 grama. 
Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos
*/


#include <iostream>

using namespace std;

int main(){

    int horas, minutos, segundos, dia;
    float massa_inicial, massa_final;

    horas = minutos = segundos = massa_inicial = massa_final = 0;

    cout << "Digite a massa inicial, em gramas: ";
    cin >> massa_inicial;

    for(massa_final = 0; massa_final < 0.5;){
        massa_final = massa_inicial / 2;
        segundos++;
    }

    for(segundos = segundos; segundos >= 60;){
        minutos++;
        segundos -= 60;
    }
    for(minutos = minutos; minutos >= 60;){
        horas++;
        minutos -= 60;
    }

    cout << "------------------------------------" << endl;
    cout << "  Massa inicial: " << massa_inicial << endl;
    cout << "  Massa final: " << massa_final << endl; 
    cout << "  Tempo: " << horas << "h " << minutos << "m " << segundos << "s " << endl;
    cout << "------------------------------------" << endl;
    

    return 0;
}