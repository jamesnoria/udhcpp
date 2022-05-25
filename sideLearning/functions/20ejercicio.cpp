/*
Escriba una función recursiva que calcule un numero elevado a una potencia
entera mayor o igual que cero: x^y
*/

#include <iostream>
using namespace std;

int potencia(int x, int y)
{
    int pot;

    if (y == 1)
    {
        pot = x;
    }
    else
    {
        pot = x * potencia(x, y - 1);
    }

    return pot;
}

int main()
{
    int base, exponente;

    cout << "Digite la base: ";
    cin >> base;
    cout << "Digite el exponente: ";
    cin >> exponente;

    cout << "El resultado es: " << potencia(base, exponente) << endl;

    return 0;
}