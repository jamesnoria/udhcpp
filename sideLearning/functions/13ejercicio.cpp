/*
Paso de parametros tipo matriz

Elevar al cuadrado todos los elementos de una matriz
*/

#include <iostream>
using namespace std;

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int, int);

int main()
{
    const int nFilas = 2;
    const int nCol = 3;

    int m[nFilas][nCol] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, nFilas, nCol);
    calcularCuadrado(m, nFilas, nCol);

    return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol)
{
    cout << "Mostrando matriz original:\n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

void calcularCuadrado(int m[][3], int nfilas, int ncol)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            m[i][j] *= m[i][j];
        }
        cout << "\n";
    }

    cout << "Mostrando matriz elevada:\n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}