#include <iostream>

using namespace std;

int main()
{
	float lado1, lado2;

	cout << "Digite os dois lados do retângulo: " >> endl;
	cin >> lado1 >> lado2;

	cout << !(lado1 == lado2) << endl;

	return 0;
}
