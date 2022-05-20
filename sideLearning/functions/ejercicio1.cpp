/*
Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función.
*/

#include <iostream>
using namespace std;

void funpot(int x, int y)
{
    long resultado = 1;
    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }

    cout << "El resultado es: " << resultado << endl;
}

int main()
{
    int numero, exponente;

    cout << "Digite un numero: ";
    cin >> numero;
    cout << "Digite exponente: ";
    cin >> exponente;

    funpot(numero, exponente);

    return 0;
}