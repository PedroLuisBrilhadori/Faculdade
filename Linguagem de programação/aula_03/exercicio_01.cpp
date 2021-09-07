#include <iostream> 
#define TAM 10

using namespace std;

int main() {

    float temperaturas[TAM], media, maior, menor;

    maior = menor = media = 0;

    for(int i = 0; i < TAM; i++){
        cout << "Insira uma temperaturas: ";
        cin >> temperaturas[i];
        media += temperaturas[i];

        if(i == 0)
            menor = maior = temperaturas[i];
        
        if(menor > temperaturas[i])
            menor = temperaturas[i];

        if(maior < temperaturas[i])
            maior = temperaturas[i];
    }

    media /= TAM;

    cout << "-----------------------------" << endl;
    cout << "A maior temperatura: " << maior << endl;
    cout << "A menor temperatura: " << menor << endl;
    cout << "Media das temperaturas: " << media << endl;
    cout << "-----------------------------" << endl;

    return 0;
}