#include <iostream> 

using namespace std;

int main() {

    int i, b;
    float s, aux;

    b = 37;

    for(i = 1; i <= 37;){
        aux = b + 1;

        s = (b * aux) / i;
        b--;
    }

    cout << "Resultado: " << s << endl;

    return 0;
}