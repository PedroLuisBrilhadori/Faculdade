#include <iostream> 
#define TAM 10

using namespace std;

int main() {
    
    int vetor[TAM], pares = 0;

    for(int b = 0; b < TAM; b++){
        cout << "insira um valor: ";
        cin >> vetor[b];
    }
    
    for(int i = 0; i < TAM; i++){

        if(vetor[i] % 2 == 0){
            pares++;
            cout << "o valor: " << vetor[i] << " é par" << endl;;
        }
    }
    
    cout << "quantidade de pares: " << pares << endl;
    
    return 0;
}
