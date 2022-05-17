// ask user for enter an bidemensional array and print it
#include <iostream>
using namespace std;

int main()
{
    cout << "Ingresa el numero de filas: ";
    int rows;
    cin >> rows;
    cout << "Ingresa el numero de columnas: ";
    int columns;
    cin >> columns;
    int array[rows][columns];
    cout << "Ingrese por cuanto desea multiplicar: ";
    int multiplier;
    cin >> multiplier;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Ingrese un elemento para [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    cout << "\nEl arreglo ingresado es: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nEl arreglo multiplicado es: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] * multiplier << " ";
        }
        cout << endl;
    }
    return 0;
}