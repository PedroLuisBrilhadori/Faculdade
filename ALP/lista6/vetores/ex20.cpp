#include <iostream> 
#define TAM 10

using namespace std;

int main() {

    int vetor[TAM], impares[TAM], aux;

    for(int i = 0; i < TAM; i++){
        cout << "insira um número no intervalo[0,50]: ";
        cin >> aux;

        if(aux >= 0 && aux <= 50){
            vetor[i] = aux;
            
            if(aux % 2 != 0){
                impares[i] = aux;
                cout << vetor[i] << " " << impares[i] << endl;
            } else
                cout << vetor[i] << endl;
        } else
            i--;
    }

    return 0;
}