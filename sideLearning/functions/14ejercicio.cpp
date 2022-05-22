/*
Determinar si una matriz es simetrica o no.
*/

#include <iostream>
using namespace std;

void comprobarSimetria(int m[][100], int nfilas, int ncol)
{
    int cont = 0;

    if (nfilas == ncol)
    {
        for (int i = 0; i < nfilas; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                if (m[i][j] == m[j][i])
                {
                    cont++;
                }
            }
        }
    }

    if (cont == nfilas * ncol)
    {
        cout << "La matriz es Simetrica" << endl;
    }
    else
    {
        cout << "La matriz NO es simetrica";
    }
}

int main()
{
    return 0;
}