// Con números generados 1-100

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[100], dato, size;

    cout << "Digite el numero de elementos: ";
    cin >> size;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        dato = 1 + rand() % 100; // aleatorios (1-100)
        arr[i] = dato;
    }

    cout << "Su arreglo de numeros aleatorios es: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Encontrar el maximo elemento
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    float rango = float(max) / float(size);

    cout << "\nmaximo: " << max << endl;
    cout << "tamaño del arreglo: " << size << endl;
    cout << "rango: " << rango << endl;

    // Crear los buckets
    vector<int> buckets[size];

    // Inicializar los buckets
    for (int i = 0; i < size; i++)
    {
        int index = int(arr[i] / rango);
        // cout << "index: " << index << endl;
        if (index != size)
        {
            buckets[index].push_back(arr[i]);
        }
        else
        {
            buckets[size - 1].push_back(arr[i]);
        }
    }

    // imprimir los buckets
    cout << "\nBuckets: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Bucket[" << i << "] : ";
        for (int j = 0; j < buckets[i].size(); j++)
        {
            cout << buckets[i][j] << " ";
        }
        cout << endl;
    }

    // Ordenar los elementos de cada bucket
    cout << "\nOrdenando los elementos de cada bucket...\n";
    for (int i = 0; i < size; i++)
    {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Imprimir los buckets ordenados
    for (int i = 0; i < size; i++)
    {
        cout << "Bucket[" << i << "] : ";
        for (int j = 0; j < buckets[i].size(); j++)
        {
            cout << buckets[i][j] << " ";
        }
        cout << endl;
    }

    // Imprimiendo los elementos ordenados
    cout << "\nElementos ordenados: ";
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            cout << buckets[i][j] << " ";
        }
    }

    return 0;
}