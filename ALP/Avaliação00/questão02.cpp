// RA: 2840482111016
// Pedro Luís Brilhadori


#include <iostream> 

using namespace std;

int main() {

    int nmr = 1, aux, primos, div_3;

    primos = div_3 = 0;

    cout << "Insira 0 para terminar! " << endl;

    for(int i = 1; nmr != 0;){
        aux = 0;
        cout << "insira um número inteiro: ";
        cin >> nmr; 

        if(nmr != 0){

            for(int b = 1; b <= nmr; b++){
                if(nmr % b == 0)
                    aux++;
            }

            if(aux == 2){
                primos++;
                cout << "Número primo " << endl;
            }
            
            if(nmr % 3 == 0)
                div_3++;

            cout << "-----------------------------" << endl;
        }
    }

    cout << "-----------------------------------------" << endl;
    cout << "Quantidade de números primos: " << primos << endl;
    cout << "Quantidade de números divisiveis por 3: " << div_3 << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}