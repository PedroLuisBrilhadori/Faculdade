#include <iostream> 

using namespace std;

int main() {

    int i, b , aux;
    float s, dois;

    b = 50;
    dois = 2;

    for (i = 1; i <= 50; i++){
        for(aux = 1; aux <= i; aux++){
            dois *= 2;
        }
        s = dois /(float)b;
        b--;
    }

    cout << "Resultado: " << s << endl;

    return 0;
}