// menu de opciones -> ingreso de datos
// si desea continuar que aumente donde se quedo

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

    


    return 0;
}