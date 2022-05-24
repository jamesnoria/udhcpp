#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Cuantos datos desea ingresar: ";
    int n;
    cin >> n;
    int numeros[n];
    vector<int> impares, pares;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares.push_back(numeros[i]);
        }
        else
        {
            impares.push_back(numeros[i]);
        }
    }

    cout << "El arreglo: ";
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Los numeros pares son: ";
    for (int i = 0; i < n; i++)
    {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Los numeros impares son: ";
    for (int i = 0; i < n; i++)
    {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}