/*
Encontrar el mayor de 2 numeros
*/

#include <iostream>
using namespace std;

void encontrarMax(int x, int y)
{
    int mayor;
    if (x > y)
    {
        mayor = x;
    }
    else
    {
        mayor = y;
    }

    cout << "El amyor de dos numeros es: " << mayor << endl;
}

int main()
{
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    encontrarMax(a, b);

    return 0;
}