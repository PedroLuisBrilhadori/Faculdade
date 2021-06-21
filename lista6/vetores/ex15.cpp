#include <iostream> 
#define TAM 10

using namespace std;

int main() {

    int vetor[TAM], aux, iguais[TAM];

    aux = 0;

    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < TAM; i++){
        for(int b = 0; b < TAM; b++){
            if(vetor[i] == vetor[b] && b != i){
                iguais[aux] = vetor[i];
                aux++;
            }
        }
    }

    for(int i = 0; i < aux; i++){
        cout << iguais[i] << endl;
    }

    return 0;
}