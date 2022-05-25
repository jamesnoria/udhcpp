/*
Comprobar si un numero es par o impar y señalar la posicion de memoria donde se esta guardando
el numero con punteros
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, *dir_numero;

    cout << "Digite un numero: ";
    cin >> numero;

    dir_numero = &numero;

    if (*dir_numero % 2 == 0)
    {
        cout << "El numero " << *dir_numero << " es par" << endl;
        cout << "Posición: " << dir_numero << endl;
    }
    else {
        cout << "El numero " << *dir_numero << " es impar" << endl;
        cout << "Posición: " << dir_numero << endl;

    }

    return 0;
}