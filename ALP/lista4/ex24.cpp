#include <iostream> 

using namespace std;

int main() {

    float s, i;

    for(i = 1; i <= 10; i++){
        s += i / (i * i);
    }

    cout << "Resultado: " << s << endl;

    return 0;
}