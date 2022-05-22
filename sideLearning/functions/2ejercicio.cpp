/*
Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario.
Por ejemplo, si se introduce el numero 256.879, deberia devolver 0.879.
*/

#include <iostream>
using namespace std;

float fracNumero(float num) {
    int entero = num;
    float resultado = num - entero;

    return resultado;
}

int main()
{
    float numero;

    cout << "Digite un numero: ";
    cin >> numero;

    cout << "El resultado es: " << fracNumero(numero) << endl;

    return 0;
}