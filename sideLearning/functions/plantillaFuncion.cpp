/*
Sacar el valor absoluto de un numero
*/

#include <iostream>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero)
{
    if (numero < 0)
    {
        numero *= -1;
    }

    cout << "El valor absoluto del numero es: " << numero << endl;
};

int main()
{

    int num1 = -10;
    float num2 = -10.2;
    double num3 = -102.5478;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    return 0;
}