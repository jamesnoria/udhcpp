#include <iostream>
#include <conio.h>

using namespace std;
struct Hotel
{
    char nombre[20];
    int dni;
    char destino[20];
    int dias;
    char mes[20];
    int edad;
    char vacunacion[10];
    int dosis;
};
int main()
{
    struct Hotel a[25];
    int op, i, v, n, aux, posi, band, dato;
    char opci;
    do
    {
        system("cls");
        cout << "======  * BIENVENIDOS *  ===== \n";
        cout << "=====  AL HOTEL GORDITO  =====\n";
        cout << "========================================" << endl;
        cout << "*** MENU DE OPCIONES *** \n";
        cout << "=> 1) Ingreso de datos			:\n";
        cout << "=> 2) Mostrar los ordenes		:\n";
        cout << "=> 3) Ordenamiento		        :\n";
        cout << "=> 4) Eliminar dato			:\n";
        cout << "=========================================";
        cout << "\nElija dentro del rango de opciones : ";
        cin >> op;
        switch (op)

        //====================================================================================================================================
        {
        case 1:
            cout << "Cuantas personas ingresaran al Hotel : ";
            cin >> n;
            cout << "=========================================" << endl;
            for (i = 0; i < n; i++)
            {

                cout << "Ingrese nombre " << i + 1 << ":";
                fflush(stdin);
                cin.getline(a[i].nombre, 20, '\n');
                fflush(stdin);
                cout << "DNI de la Persona " << i + 1 << ":";
                cin >> a[i].dni;
                cout << "Destino de donde Llega la persona " << i + 1 << ":";
                fflush(stdin);
                cin.getline(a[i].destino, 20, '\n');
                fflush(stdin);
                cout << "Cuantos dias se quedara " << i + 1 << ":";
                cin >> a[i].dias;
                fflush(stdin);
                cout << "Mes en que se Hospeda " << i + 1 << ":";
                cin >> a[i].mes;
                fflush(stdin);
                cout << "Edad del que se Hospeda " << i + 1 << ":";
                cin >> a[i].edad;
                fflush(stdin);
                cout << "Carnet de Vacunacion " << i + 1 << ":";
                cin >> a[1].vacunacion;
                cout << "Cuantas dosis tienes " << i + 1 << ":";
                cin >> a[1].dosis;
                fflush(stdin);
                cout << "===========================================" << endl;
                cout << endl;
            }

            //====================================================================================================================================
            break;
        case 2:
            cout << "=========================================" << endl;
            for (i = 0; i < n; i++)
            {
                cout << "=> Nombre   : " << a[i].nombre << endl;
                cout << "=> DNI      : " << a[i].dni << endl;
                cout << "=> Destino  : " << a[i].destino << endl;
                cout << "=> Dias     : " << a[i].dias << endl;
                cout << "=> Mes      : " << a[i].mes << endl;
                cout << "=> Edad     : " << a[i].edad << endl;
                cout << "=> Vacunado : " << a[i].vacunacion << endl;
                cout << "=> Dosis    : " << a[i].dosis << endl;
                cout << "=========================================" << endl;
                cout << endl;
            }
            break;
            //====================================================================================================================================

        case 3:
            // ordenamiento por insercion por dias
            for (i = 1; i < n; i++)
            {
                for (v = 0; v < (n - i); v++)
                {
                    if (a[v].dias > a[v + 1].dias)
                    {
                        aux = a[v].dias;
                        a[v].dias = a[v + 1].dias;
                        a[v + 1].dias = aux;
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                cout << "[" << i << "]:" << a[i].dias << endl;
            }

            cout << "\nDatos de promedio ordenado de manera ascendente con exito";
            break;

            //==================================================================================================================================
        case 4:
            cout << "\nELIMINAR UN DATO DE LA LISTA\n";
            cout << "Ingrese dato a eliminar: ";
            cin >> dato;
            //////buscando dato a eliminar///////////
            band = 0;
            for (i = 0; i < n; i++)
                if (dato == a[i].dias)
                {
                    posi = i;
                    band = 1;
                    break;
                }
            if (band == 1)
            {
                /////eliminando dato hallado////////////
                if (posi == (n - 1))
                {
                    n = n - 1;
                }
                else
                {
                    for (i = posi; i < n - 1; i++)
                        a[i].dias = a[i + 1].dias;
                    n = n - 1;
                }
            }
            else
                cout << "Dato no hallado...";
            break;
        default:
            cout << "Porfavor lea y no ingrese datos no validos\n";
            cout << "error el numero ingresado debe estar entre [1-4]\n";
        }
        cout << "quiere continuar S/N?: ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');
    cout << "Gracias por su atencion";

    getch();
    return 0;
}