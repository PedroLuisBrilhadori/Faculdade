#include <iostream>

using namespace std;

int main () {

    int i;
    float km1, km2, tempo, espaco, velocidade;  

    km2 = 123123; 


    for (km1 = 0; km1 != km2;){

        cout << "Insira os marcos quilométricos de duas cidades, em ordem crescente. " << endl;
        cin >> km1 >> km2; 
        
        if (km1 != km2){
            if (km1 < km2){
                espaco = km2 - km1;

                for (i = 10; i <= 80;){
                    tempo = espaco / i;

                    if (tempo > 2){
                        cout << "--------------------------------------" << endl;
                        cout << "Marcos kilometricos: " << km1 << " e " << km2 << endl;
                        cout << "Velocidade: " << i << "Km/h" << endl;
                        cout << "Tempo decorrido: " << tempo << endl;
                    }
                    i += 10;
                }
            }
        }
        cout << "-------------------------------------------" << endl;
    }



    return 0;
}