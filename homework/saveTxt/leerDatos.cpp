#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int A[100], Aux, i, NA, op, KD, contA = 0, j;
    char opci;
    string linea;

    // Definir los objetos
    ofstream archivoSalida;
    ifstream archivoEntrada;

    archivoEntrada.open("menuClase.txt");
    archivoSalida.open("menuClase.txt", ios::app); // Abrir el archivo para escribir sobre él

    // ingresar datos dentro del archivo en el arreglo
    while (getline(archivoEntrada, linea))
    {
        A[contA] = atoi(linea.c_str());
        contA++;
    }

    do
    {
        system("clear");
        cout << "* MENU DE OPCIONES *\n";
        cout << "* 1) Ingreso de datos            *\n";
        cout << "* 2) Mostrar Arreglo             *\n";
        cout << "* 3) Ordenar Arreglo             *\n";
        cout << "*\n ...ELIJA UNA OPCION....: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "\n----- ARREGLO A -----\n";
            do
            {
                cout << "Cuantos datos ingresara?: ";
                cin >> KD;
            } while (KD < 0 || KD > 10);

            NA = contA + KD;

            if (archivoSalida.is_open())
            {
                for (i = contA; i < NA; i++)
                {
                    cout << "A[" << i << "]: ";
                    cin >> A[i];
                    archivoSalida << A[i] << "\n";
                    contA++;
                }
            }

            break;
        case 2:
            system("clear");

            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << contA << " DATOS-----\n";
            for (i = 0; i < contA; i++)
            {
                // getch();
                cout << "A[" << i << "]: " << A[i] << endl;
            }

            break;
        case 3:
            system("clear");
            for (i = 0; i < NA - 1; i++)
                for (j = i + 1; j < NA; j++)
                    if (A[i] > A[j])
                    {
                        Aux = A[i];
                        A[i] = A[j];
                        A[j] = Aux;
                    }

            cout << "\nDatos ordenados ascendentemente, con exito...\n";

            break;

        default:
            cout << "...Error esa opcion no existe\n";
        }

        cout << "...DESEA CONTINUAR S/N?: ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');

    cout << "Gracias...hasta pronto";

    return 0;
}