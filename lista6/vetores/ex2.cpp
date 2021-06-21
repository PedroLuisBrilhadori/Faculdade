#include <iostream> 
#define TAM 6

using namespace std;

int main() {

    int soma, a[TAM] = {1, 0, 5, -2, -5, 7};

    soma = a[0] + a[1] + a[5];
    cout << "soma: " << soma << endl;
    a[4] = 100;

    for(int i = 0; i < TAM; i++){
        cout << "A[" << i << "] = " << a[i] << endl; 
    }

    return 0;
}