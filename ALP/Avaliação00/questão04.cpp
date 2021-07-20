// RA: 2840482111016
// Pedro Luís Brilhadori

#include <iostream> 

using namespace std;

int main() {
    int b;
    long double s = 1, fatorial, dois = 2;

        
    for (int i = 3; i <= 500; i++){
        for(b = fatorial = i; b > 1; b -= 1){
            fatorial *= b - 1;
        } 
        for(b = 2; b < i; b++){
            dois *= 2;  
        }
        s += dois / fatorial;
    }
        cout << "Valor de S é: " << s << endl;


    return 0;
}