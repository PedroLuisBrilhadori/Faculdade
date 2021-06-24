#include <iostream> 

#define TAM 3

using namespace std;

int main() {

    int matriz[3][TAM], resultados[TAM], aux;

    for(int i = 0; i < TAM; i++){
        resultados[i] = 0;
        for(int b = 0; b < TAM; b++){
            cout << "insira o va    lor da coluna " << i << " linha " << b << endl;
            cin >> aux;
            matriz[i][b] = aux;
            resultados[i] += aux;
        }
    }

    for(int i = 0; i < TAM; i++){
        cout << "resultados: " << resultados[i] << " "; 
    }

    cout << endl;

    return 0;
}