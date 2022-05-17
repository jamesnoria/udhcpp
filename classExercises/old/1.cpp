#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int A[10], B[10], C[10], U[30], I[30], i, NA, NB, NC, NU, op, k;
    char opci;

    do
    {
        system("clear");
        cout << "*** MENU DE OPCIONES ***\n";
        cout << "* 1) Ingreso de datos            *\n";
        cout << "* 2) Mostrar cada conjunto       *\n";
        cout << "* 3) Union de conjuntos          *\n";
        cout << "* 4) Interseccion                *\n";
        cout << "* ...ELIJA UNA OPCION....: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "\n----- CONJUNTO A -----\n";
            cout << "Cuantos datos ingresará?: ";
            cin >> NA;
            for (i = 0; i < NA; i++)
            {
                cout << "A[" << i << "]: ";
                cin >> A[i];
            }
            cout << "\n----- CONJUNTO B -----\n";
            cout << "Cuantos datos ingresará?: ";
            cin >> NB;
            for (i = 0; i < NB; i++)
            {
                cout << "B[" << i << "]: ";
                cin >> B[i];
            }
            cout << "\n----- CONJUNTO C -----\n";
            cout << "Cuantos datos ingresará?: ";
            cin >> NC;
            for (i = 0; i < NC; i++)
            {
                cout << "C[" << i << "]: ";
                cin >> C[i];
            }
            break;
        case 2:
            system("cls");
            cout << "\nMOSTRANDO LOS CONJUNTOS\n";
            cout << "\n----- CONJUNTO A " << NA << " DATOS-----\n";
            for (i = 0; i < NA; i++)
                cout << "A[" << i << "]: " << A[i] << endl;

            cout << "\n----- CONJUNTO B " << NB << " DATOS-----\n";
            for (i = 0; i < NB; i++)
                cout << "B[" << i << "]: " << B[i] << endl;

            cout << "\n----- CONJUNTO C " << NC << " DATOS-----\n";
            for (i = 0; i < NC; i++)
                cout << "C[" << i << "]: " << C[i] << endl;
            break;
        case 3:
            system("cls");
            NU = NA + NB + NC;
            for (i = 0; i < NA; i++)
                U[i] = A[i];
            k = 0;
            for (i = NA; i < (NA + NB); i++)
            {
                U[i] = B[k];
                k++;
            }

            k = 0;
            for (i = (NA + NB); i < NU; i++)
            {
                U[i] = C[k];
                k++;
            }
            cout << "\nMOSTRANDO LA UNION" << endl;
            for (i = 0; i < NU; i++)
                cout << "U[" << i << "]: " << U[i] << "\n";

            break;
        case 4:
            // interseccion del conjunto a, b y c
            system("clear");
            cout << "\nMOSTRANDO LA INTERSECCION" << endl;
            for (i = 0; i < NA; i++)
            {
                for (k = 0; k < NB; k++)
                {
                    if (A[i] == B[k])
                    {
                        I[i] = A[i];
                    }
                }
            }
            k = 0;
            for (i = 0; i < NA; i++)
            {
                for (k = 0; k < NC; k++)
                {
                    if (I[i] == C[k])
                    {
                        I[i] = I[i];
                        break;
                    }
                }
            }
            for (i = 0; i < NA; i++)
                cout << "I[" << i << "]: " << I[i] << endl;
            break;
        }

        default:
            cout << "...Error esa opcion no existe\n";
        }

        cout << "...DESEA CONTINUAR S/N?: ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');
    cout << "Gracias...hasta pronto";

    return 0;
}