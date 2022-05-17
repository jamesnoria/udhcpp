#include <iostream>
using namespace std;

void quickSort(float a[], int primero, int ultimo) {
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do {
        while (a[i] < pivote) i++;
        while (a[j] > pivote) j--;
        if (i <= j) {
            float temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j) quickSort(a, primero, j); // ordenar los menores
    if (i < ultimo) quickSort(a, i, ultimo); // ordenar los mayores
}

int main()
{
    float arreglo[] = {4, 7, 1, 8, 2, 10, 5, 9};

    quickSort(arreglo, 0, 8);

    for (int i = 0; i < 9; i++)
        cout << arreglo[i] << " ";

    return 0;
}