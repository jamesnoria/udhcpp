#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char **argv)
{
    int A[20], Aux, i, NA, op, KD, contA = 0, j, dato, band = 0,
                                   inf, sup, mitad, posicion;
    char opci, tecla;

    do
    {
        system("clear");
        cout << "* MENU DE OPCIONES *\n";
        cout << "* 1) Ingreso de datos            *\n";
        cout << "* 2) Listar Arreglo              *\n";
        cout << "* 3) Eliminar un elemento        *\n";
        cout << "* 4) Lista circular derecha      *\n";
        cout << "* 5) Lista circular izquierda    *\n";
        cout << "* 6) Lista doblemente enlazada   *\n";
        cout << "* 7) ----------------------      *\n";
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
            } while (KD < 0 || KD > 20);

            NA = contA + KD;

            for (i = contA; i < NA; i++)
            {
                cout << "A[" << i << "]: ";
                cin >> A[i];
                contA++;
            }

            break;
        case 2:
            system("clear");
            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << NA << " DATOS-----\n";
            for (i = 0; i < NA; i++)
            {
                cout << A[i] << " ";
                getch();
            }

            break;
        case 3:
            system("clear");
            cout << "\nELIMINAR UN DATO DE LA LISTA\n";
            cout << "Ingrese dato a eliminar: ";
            cin >> dato;
            //////buscando dato a eliminar///////////
            band = 0;
            for (i = 0; i < NA; i++)
                if (dato == A[i])
                {
                    posicion = i;
                    band = 1;
                    break;
                }
            if (band == 1)
            {
                /////eliminando dato hallado////////////
                if (posicion == (NA - 1))
                {
                    NA = NA - 1;
                    contA = NA;
                }
                else
                {
                    for (i = posicion; i < NA - 1; i++)
                        A[i] = A[i + 1];

                    NA = NA - 1;
                    contA = NA;
                }
            }
            else
                cout << "Dato no hallado...";

            break;
        case 4:
            system("clear");
            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << NA << " DATOS-----\n";

            i = 0;
            do
            {
                cout << A[i] << " ";
                tecla = getch();
                if (tecla == 'A')
                    i++;
                if (i == NA)
                    i = 0;

            } while (tecla == 'A');

            break;
        case 5:
            system("clear");
            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << NA << " DATOS-----\n";

            i = 0;
            do
            {
                cout << A[i] << " ";
                tecla = getch();
                if (tecla == 'B')
                    i--;
                if (i == (-1))
                    i = NA - 1;

            } while (tecla == 'B');

            break;
        case 6:
            system("clear");
            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << NA << " DATOS-----\n";

            i = 0;
            do
            {
                cout << A[i] << " ";
                tecla = getch();

                if (tecla == 'B')
                {

                    if (tecla == 'B')
                        i--;
                    if (i == (-1))
                        i = NA - 1;
                }
                if (tecla == 'A')
                {

                    if (tecla == 'A')
                        i++;
                    if (i == NA)
                        i = 0;
                }

            } while (tecla == 'B' || tecla == 'A');

            break;

        default:
            cout << "...Error esa opcion no existe\n";
        }

        cout << "\n...DESEA CONTINUAR S/N?: ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');
    cout << "Gracias...hasta pronto";

    return 0;
}