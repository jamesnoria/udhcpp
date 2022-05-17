// implement divide and conquer unidimensional array

#include <iostream>
using namespace std;

int main()
{
    // implement divide and conquer unidimensional array
    int numeros[100], dato, nfilas, ncol;

    cout << "Digite el numero de elementos: ";
    cin >> nfilas;

    srand(time(NULL)); // generar numeros aleatorios

    // rellenando matriz de numeros aleatorios
    for (int i = 0; i < nfilas; i++)
    {
        dato = 1 + rand() % 100; // aleatorios (1-100)
        numeros[i] = dato;
    }

    cout << "\nSu matriz de numeros aleatorios es: \n";
    for (int i = 0; i < nfilas; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << "\n";

    // implementar divide and conquer unidimensional array
    

    return 0;
}