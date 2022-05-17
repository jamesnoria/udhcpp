#include <iostream>
#include <conio.h>

using namespace std;

struct T_cadaver
{
    char DNI[10];
    char Nom[30];
    char Pab[30];
    // char Ubicacion
    char Estado;
    char Sexo;
    int AnioF;
};

int main(int argc, char **argv)
{
    T_cadaver Persona[100];
    int A[100], Aux, i, NA, op, KD, contA = 0, j, dato, posicion, band;
    char opci, tecla;

    do
    {
        system("clear");
        cout << "* MENU DE OPCIONES *\n";
        cout << "* 1) Ingreso de datos               *\n";
        cout << "* 2) Mostrar Lista                  *\n";
        cout << "* 3) ............                   *\n";
        cout << "* 4) ............                   *\n";
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
            } while (KD < 0 || KD > 100);

            NA = contA + KD;

            for (i = contA; i < NA; i++)
            {
                cout << "Persona[" << i << "]: ";
                cout << "\nDNI: ";
                cin >> Persona[i].DNI;
                cout << "\nApellidos y Nombres: ";
                cin.getline(Persona[i].Nom, 30, '\n');
                fflush(stdin);
                cout << "\nPabellon: ";
                cin.getline(Persona[i].Pab, 30, '\n');
                cout << "\nPerpetuo o temporal: ";
                cin >> Persona[i].Estado;
                cout << "\nSexo: ";
                cin >> Persona[i].Sexo;
                fflush(stdin);
                cout << "\nAnio de fallecimiento: ";
                cin >> Persona[i].AnioF;

                contA++;
            }

            break;
        case 2:
            system("clear");
            cout << "\nMOSTRANDO EL ARREGLO: \n";
            cout << "\n----- ARREGLO A " << NA << " DATOS-----\n\n";
            for (i = 0; i < NA; i++)
            {
                cout << "Persona[" << i << "]: ";
                cout << "\nDNI: " << Persona[i].DNI;
                cout << "\nApellidos y Nombres: " << Persona[i].Nom;
                cout << "\nPabellon: " << Persona[i].Pab;
                cout << "\nPerpetuo o temporal: " << Persona[i].Estado;
                cout << "\nSexo: " << Persona[i].Sexo;
                cout << "\nAnio de fallecimiento: " << Persona[i].AnioF;
                getch();
            }

            break;
        case 3:
            system("clear");

            break;
        case 4:
            system("clear");

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