/*
Realice una funcion que dada una matriz y un numero de filas de la matriz
devuelva el menor de los elementos almacenados en dicha fila
*/

#include <iostream>
using namespace std;

int comprobarMenorElemento(int m[][100], int nfilas, int ncol)
{
    int fila, menor = 99999;

    cout << "Digite un numero de filas para comprobar menor elemento: ";
    cin >> fila;

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j > ncol; j++)
        {
            if (i == fila)
            {
                if (m[i][j] < menor)
                {
                    menor = m[i][j];
                }
            }
        }
    }

    return menor;
}

int main()
{
}