#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// MERGE SORT

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// BUCKET SORT

void bucketSort(float arr[], int tam)
{
    // Encontrar el maximo elemento
    float max = arr[0];
    for (int i = 1; i < tam; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Rango de cada bucket
    float rango = float(max) / float(tam);

    // Crear los buckets
    vector<float> buckets[tam];

    // Inicializar los buckets
    for (int i = 0; i < tam; i++)
    {
        int index = int(arr[i] / rango);
        // cout << "index: " << index << endl;
        if (index != tam)
        {
            buckets[index].push_back(arr[i]);
        }
        else
        {
            buckets[tam - 1].push_back(arr[i]);
        }
    }

    // Ordenar los elementos de cada bucket
    for (int i = 0; i < tam; i++)
    {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Imprimiendo los elementos ordenados
    int j = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            cout << buckets[i][j] << " ";
        }
    }
}

// Inserción

void insertionSort(int arr[], int tam)
{
    int i, pos, aux;

    for (i = 0; i < tam; i++)
    {
        pos = i;
        aux = arr[i];

        while (pos > 0 && arr[pos - 1] > aux)
        {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = aux;
    }

    for (i = 0; i < tam; i++)
    {
        cout << arr[i] << " ";
    }
}

// Quick Sort

void quickSort(float a[], int primero, int ultimo)
{
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do
    {
        while (a[i] < pivote)
            i++;
        while (a[j] > pivote)
            j--;
        if (i <= j)
        {
            float temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j)
        quickSort(a, primero, j); // ordenar los menores
    if (i < ultimo)
        quickSort(a, i, ultimo); // ordenar los mayores

    for (int i = 0; i < ultimo; i++)
        cout << a[i] << " ";
}