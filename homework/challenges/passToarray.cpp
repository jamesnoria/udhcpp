#include <iostream>
using namespace std;

int main()
{
    cout << "Cuantos datos desea ingresar: ";
    int n;
    cin >> n;
    int numeros[n];
    int impares[n], pares[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int numImpares = 0, numPares = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares[numPares] = numeros[i];
            numPares++;
        }
        else
        {
            impares[numImpares] = numeros[i];
            numImpares++;
        }
    }

    cout << "El arreglo: ";
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Los numeros pares son: ";
    for (int i = 0; i < numPares; i++)
    {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Los numeros impares son: ";
    for (int i = 0; i < numImpares; i++)
    {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}