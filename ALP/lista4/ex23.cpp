#include <iostream> 

using namespace std;

int main() {

    float s, aux, b, i;

    b = 37;

    for(i = 1; i <= 37; i++){
        aux = b + 1;

        s = (b * aux) / i;
        b--;
    }

    cout << "Resultado: " << s << endl;

    return 0;
}