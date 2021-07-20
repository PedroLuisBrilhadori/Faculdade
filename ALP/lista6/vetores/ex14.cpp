#include <iostream> 
#define TAM 10

using namespace std;

int main() {

    int vetor[TAM], aux;

    for(int i = 0; i < TAM; i++){
        cout << "insira o valor " << i << ": ";
        cin >> vetor[i]; 
    }

    for(int i = 0; i < TAM; i++){
        for(int b = 0; b < TAM; b++){ 
            if(vetor[i] == vetor[b] && i != b){
                cout << "O Índice " << b << "contém um valor que se repete" << endl;
            }
        }
    }

    return 0;
}