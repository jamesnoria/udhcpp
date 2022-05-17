#include <iostream>
#include <algorithm>
#include <offstream>
using namespace std;

int main()
{
    cout << "Ingrese el tamaño del arreglo: ";
    int n;
    cin >> n;
    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de A[" << i <<"]: ";
        cin >> arreglo[i];
    }

    // ordenar el arreglo 
    for (int i = 0; i < n; i++)
    {
        sort(arreglo, arreglo + n);
    }

    // save array in file
    ofstream archivo;
    archivo.open("arreglo.txt");
    

    // mostrar el arreglo ordenado
    cout << "\nEl arreglo ordenado es: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << " ";
    }
        
    // busqueda binaria
    int busqueda;
    cout << "\n\nIngrese el valor a buscar: ";
    cin >> busqueda;

    int inicio = 0;
    int fin = n - 1;
    int medio;
    bool encontrado = false;

    while (inicio <= fin && !encontrado)
    {
        medio = (inicio + fin) / 2;
        if (arreglo[medio] == busqueda)
        {
            encontrado = true;
        }
        else if (arreglo[medio] > busqueda)
        {
            fin = medio - 1;
        }
        else
        {
            inicio = medio + 1;
        }
    }

    if (encontrado)
    {
        cout << "El valor " << busqueda << " se encuentra en la posicion " << medio << endl;
    }
    else
    {
        cout << "El valor " << busqueda << " no se encuentra en el arreglo" << endl;
    }


    return 0;

}