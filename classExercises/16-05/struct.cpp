#include <conio.h>
#include <string.h>

using namespace std;
struct T_mascota
{
    char Codigo[10];
    char Nom_masc[20];
    char Especie[10];
    char Sexo;
    char Nom_due[30];
    char DNI[10];
    char Cel[10];
    char Enferm[20];
    int Edad_masc;
};

int main(int argc, char **argv)
{
    T_mascota Paciente[10];
    int A[100], Aux, i, NA, op, KD, contA = 0, j, dato, posi, band;
    char opci, tecla, DNI_due[10];

    do
    {
        system("cls");
        cout << "* MENU DE OPCIONES *\n";
        cout << "* 1) Ingreso de datos                 *\n";
        cout << "* 2) Mostrar Lista                    *\n";
        cout << "* 3) Busqueda por DNI                 *\n";
        cout << "* 4) Buscar perros menores de 3 anios *\n";z
        cout << "* 5) Ordenar por Ap_nom del dueño    *\n";
        cout << "*\n ...ELIJA UNA OPCION....: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "\n----- BASE VETERINARIA -----\n";
            do
            {
                cout << "Cuantos PACIENTES ingresara?: ";
                cin >> KD;
            } while (KD < 0 || KD > 10);

            NA = contA + KD;

            for (i = contA; i < NA; i++)
            {
                cout << "\nPACIENTE[" << i << "]: \n";
                fflush(stdin);
                cout << "Codigo: ";
                cin >> Paciente[i].Codigo;
                fflush(stdin);
                cout << "Nombre de la mascota: ";
                cin.getline(Paciente[i].Nom_masc, 20, '\n');
                cout << "Especie: ";
                cin >> Paciente[i].Especie;
                cout << "Sexo: ";
                cin >> Paciente[i].Sexo;
                fflush(stdin);
                cout << "Nombre del dueno: ";
                cin.getline(Paciente[i].Nom_due, 30, '\n');
                fflush(stdin);
                cout << "DNI: ";
                cin >> Paciente[i].DNI;
                cout << "Celular: ";
                cin >> Paciente[i].Cel;
                fflush(stdin);
                cout << "Enfermedad de la mascota: ";
                cin.getline(Paciente[i].Enferm, 20, '\n');
                fflush(stdin);
                cout << "Edad de la mascota: ";
                cin >> Paciente[i].Edad_masc;
                contA++;
            }

            break;
        case 2:
            system("cls");
            cout << "\nMOSTRANDO DATOS DE PACIENTES: \n";
            cout << "\n----- EXISTEN " << NA << " PACIENTES-----\n\n";
            for (i = 0; i < NA; i++)
            {
                cout << "\nPACIENTE[" << i << "]: \n";
                cout << "Codigo: " << Paciente[i].Codigo;
                cout << "\nNombre de la mascota: " << Paciente[i].Nom_masc;
                cout << "\nEspecie: " << Paciente[i].Especie;
                cout << "\nSexo: " << Paciente[i].Sexo;
                cout << "\nNombre del dueño: " << Paciente[i].Nom_due;
                cout << "\nDNI: " << Paciente[i].DNI;
                cout << "\nCelular: " << Paciente[i].Cel;
                cout << "\nEnfermedad de la mascota: " << Paciente[i].Enferm;
                cout << "\nEdad de la mascota: " << Paciente[i].Edad_masc;
                getch();
            }

            break;
        case 3:
            system("cls");
            cout << "\nBUSQUEDA POR DNI DEL DUENO: \n";
            ////indicar de DNI a buscar
            cout << "Ingrese DNI a buscar: ";
            cin >> DNI_due;
            /// comparar cada casilla con el DNI ingresado
            band = 0;
            for (i = 0; i < NA; i++)
                if (strcmp(DNI_due, Paciente[i].DNI) == 0) // DNI_due==Paciente[i].DNI
                {
                    posi = i;
                    band = 1;
                    break;
                }

            if (band == 1)
            {
                cout << "\nPACIENTE HALLADO, EN EL CASILLERO: " << posi << endl;
                cout << "\nPACIENTE[" << posi << "]: \n";
                cout << "Codigo: " << Paciente[posi].Codigo;
                cout << "\nNombre de la mascota: " << Paciente[posi].Nom_masc;
                cout << "\nEspecie: " << Paciente[posi].Especie;
                cout << "\nSexo: " << Paciente[posi].Sexo;
                cout << "\nNombre del dueño: " << Paciente[posi].Nom_due;
                cout << "\nDNI: " << Paciente[posi].DNI;
                cout << "\nCelular: " << Paciente[posi].Cel;
                cout << "\nEnfermedad de la mascota: " << Paciente[posi].Enferm;
                cout << "\nEdad de la mascota: " << Paciente[i].Edad_masc;
            }

            break;
        case 4:
            system("cls");
            cout << "\nBUSQUEDA DE PERROS MENORES DE 3 ANIOS: \n";
            for (i = 0; i < NA; i++)
                if (strcmp(Paciente[i].Especie, "perro") == 0 && Paciente[i].Edad_masc < 3)
                {
                    cout << "\nPACIENTE[" << i << "]: \n";
                    cout << "Codigo: " << Paciente[i].Codigo;
                    cout << "\nNombre de la mascota: " << Paciente[i].Nom_masc;
                    cout << "\nEspecie: " << Paciente[i].Especie;
                    cout << "\nSexo: " << Paciente[i].Sexo;
                    cout << "\nNombre del dueño: " << Paciente[i].Nom_due;
                    cout << "\nDNI: " << Paciente[i].DNI;
                    cout << "\nCelular: " << Paciente[i].Cel;
                    cout << "\nEnfermedad de la mascota: " << Paciente[i].Enferm;
                    cout << "\nEdad de la mascota: " << Paciente[i].Edad_masc;
                }

            break;

        default:
            cout << "...Error esa opcion no existe\n";
        }
        fflush(stdin);
        cout << "\n...DESEA CONTINUAR S/N?: ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');
    cout << "Gracias...hasta pronto";

    return 0;
}