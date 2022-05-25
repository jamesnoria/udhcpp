/*
Pedir dos valores y usar recursividad para mostrar los numeros entre ese rango
*/

#include <iostream>
using namespace std;

int escribeNumeros(int ini, int fin)
{
    if (ini == fin)
    {
        return ini;
    }
    else
    {
        return escribeNumeros(ini, fin - 1);
    }
}

int main()
{
    int inicio, fin;

    cout << "Digite inicio: ";
    cin >> inicio;
    cout << "Digite final: ";
    cin >> fin;

    for (int i = inicio; i <= fin; i++)
    {
        cout << escribeNumeros(i, fin) << " ";
    }

    cout << "\n";

    return 0;
}