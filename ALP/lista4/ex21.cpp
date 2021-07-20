#include <iostream> 

using namespace std;

int main() {
    
    int i;
    float s, aux;

    aux = 1;

    for(i = 1; i <= 50; i++){
        s = aux / i;
        aux += 2; 
    }

    cout << "resultado: " << s << endl;

    return 0;
}