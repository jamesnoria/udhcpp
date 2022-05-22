/*
Intercambiar el valor de 2 variables utilizando paso de parametros por referencia
*/

#include <iostream>
using namespace std;

void intercambiar(int &num1, int &num2)
{
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main()
{
    int num1 = 10, num2 = 15;

    intercambiar(num1, num2);

    cout << "El valor de num1 es: " << num1 << endl;
    cout << "El valor de num2 es: " << num2 << endl;
}