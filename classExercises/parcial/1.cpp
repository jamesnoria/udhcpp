#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int num;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // convertir matriz en un vector
    int vector[9];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vector[i*3+j] = matriz[i][j];
        }
    }

    cout << "Ingrese numero a eliminar: ";
    cin >> num;

    // eliminar numero y y remplazar con el siguiente elemento y dejar al ultimo elemento en 0

    for (int i = 0; i < 9; i++)
    {
        if (vector[i] == num)
        {
            vector[i] = vector[i+1];
            vector[i+1] = 0;
        }
    }

    // convertir vector en matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = vector[i*3+j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}