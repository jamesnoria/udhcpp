/*
Realice una función que tome como parámetros un vector de números enteros y
devuelva la suma de sus elementos
*/

#include <iostream>
using namespace std;

// Prototipo de funcion
void pedirDatos();
int calcularSuma(int vec[], int tam);

// Variables tipo global:
int vec[100], tam;

int main()
{
    pedirDatos();

    cout << "La suma de los vectores: " << calcularSuma(vec, tam);
}

// Definción de funciones
void pedirDatos()
{
    cout << "Digite el numero de elementos del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "Elemento para vec[" << i << "]: ";
        cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam)
{
    int suma=0;

    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }

    return suma;
}