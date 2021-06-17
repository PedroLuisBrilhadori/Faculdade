#include <iostream> 
#define TAM 10

using namespace std;

int main() {

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        cout << "insira o valor " << i << ": ";
        cin >> vetor[i]; 
    }

    for(int i = 0; i < TAM; i++){
        for(int b = 0; b < i; b++){
            if(vetor[i] == vetor[b]){
                cout << "valor [" << i << "] é igual ao do [" << b << "]" << endl;  
            }
        }
    }

    return 0;
}