// cout<<"* MENÚ DE OPCIONES *\n";
// cout<<"1) INGRESO DE DATOS A LA MATRIZ...\n";
// cout<<"2) MOSTRAR LA MATRIZ ACTUAL.......\n";
// cout<<"3) MULTIPLICACIÓN POR UN ESCALAR..\n";
// cout<<"4) SUMAR UNA FILA.................\n";
// cout<<"5) SUMAR UNA COLUMNA..............\n";
// cout<<"6) TRAZA DE LA MATRIZ.............\n";
// cout<<"7) TRANSPUESTA DE LA MATRIZ.......\n";
// cout<<"8) SUMA TRIANGULAR SUPERIOR.......\n";
// cout<<"9) SUMA TRIANGULAR INFERIOR.......\n";

#include <iostream>
using namespace std;

int main()
{
    int numeros[100][100], dato, nfilas, ncol;

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

    // mostrar triangular superior
    cout << "\n\nMostrar triangular superior: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (i <= j)
            {
                cout << numeros[i][j] << " ";
            }
        }
        cout << "\n";
    }

    // suma de la triangular superior
    int suma = 0;
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (i <= j)
            {
                suma += numeros[i][j];
            }
        }
    }
    cout << "\nLa suma de la triangular superior es: " << suma;

    // mostrar triangular inferior
    cout << "\n\nMostrar triangular inferior: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (i >= j)
            {
                cout << numeros[i][j] << " ";
            }
        }
        cout << "\n";
    }

    // suma de la triangular inferior
    int suma2 = 0;
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (i >= j)
            {
                suma2 += numeros[i][j];
            }
        }
    }

    cout << "\nLa suma de la triangular inferior es: " << suma2;

    return 0;
}