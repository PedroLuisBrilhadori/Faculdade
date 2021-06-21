#include <iostream> 

#define TAM 10

using namespace std;

int main() {

    int vetor[TAM], aux;

    for(int i = 0; i < TAM; i++){
        cin >> aux;

        if(aux % 2 == 0){
            vetor[i] = aux;
        } else
            vetor[i] = 0;
    }

    for(int i = 0; i < TAM; i++)
        cout << vetor[i] << endl;

    return 0;
}