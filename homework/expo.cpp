#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int numeros[100][100], dato, nfilas, ncol, op;
    char opci;

    cout << "Digite el numero de filas: ";
    cin >> nfilas;
    cout << "Digite el numero de columnas: ";
    cin >> ncol;

    srand(time(NULL)); // generar numeros aleatorios

    // rellenando matriz de numeros aleatorios
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            dato = 1 + rand() % 100; // aleatorios (1-100)
            numeros[i][j] = dato;
        }
    }

    cout << "\nSu matriz de numeros aleatorios es: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << numeros[i][j] << " ";
        }
        cout << "\n";
    }

    do
    {
        cout << "\n*** MENU DE OPCIONES ***\n";
        cout << "1. Mostrar la diagonal principal\n";
        cout << "2. Mostrar la matriz transpuesta\n";
        cout << " ...ELIJA UNA OPCION....: ";
        cin >> op;
        switch (op)
        {
        case 1:
            system("cls");
            for (int i = 0; i < nfilas; i++)
            {
                for (int j = 0; j < ncol; j++)
                {
                    if (i == j)
                    {
                        cout << numeros[i][j];
                    }
                }
                cout << "\n";
            }
            break;
        case 2:
            system("cls");
            for (int i = 0; i < nfilas; i++)
            {
                for (int j = 0; j < ncol; j++)
                {
                    cout << numeros[j][i] << " ";
                }
                cout << "\n";
            }
            break;
        default:
            cout << "...Error esa opcion no existe\n";
        }

        cout << "...DESEA CONTINUAR S/N?: ";
        cin >> opci;

    } while (opci == 's' || opci == 'S');
    cout << "Gracias...";

    return 0;
}