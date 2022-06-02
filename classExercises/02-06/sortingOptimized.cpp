/*
Ordenar bajo cuatro metodos, lo siguientes datos:
- Edad
- Año de ingreso
- Promedio
- Fecha nacimiento
*/

#include <iostream>
#include <locale.h>
#include "../../libs/udh.h"

using namespace std;

struct Alumnos
{
    char nombre[30];
    int edad;
    int anio_ingreso; // ej: 2019-2020-2021
    float promedio;   // ej: 19.5, 10.0, etc.
    struct fecha_nacimiento
    {
        int dia;
        int mes;
        int anio;
    } fecha_nacimiento;
};

int main()
{
    setlocale(LC_ALL, "spanish");

    int cantidad, op_menu;
    char opcion;
    int arrEdades[50], arrIngreso[50];
    float arrPromedios[50], arrNacimiento[50];

    cout << "Cuantos alumnos desea ingresar?: ";
    cin >> cantidad;

    Alumnos alumnos[cantidad];

    do
    {
        system("cls");
        cout << "=== MENU ===" << endl;
        cout << "1. Ingresar datos" << endl;
        cout << "2. Mostrar datos" << endl;
        cout << "3. Ordenar datos por metodo" << endl;

        cout << "Ingrese una opcion: ";
        cin >> op_menu;

        switch (op_menu)
        {
        case 1:
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Ingrese los datos del alumno " << i + 1 << endl;
                cin.ignore();
                cout << "Nombre: ";
                cin.getline(alumnos[i].nombre, 30, '\n');
                cout << "Edad: ";
                cin >> alumnos[i].edad;
                cout << "Año de ingreso: ";
                cin >> alumnos[i].anio_ingreso;
                cout << "Promedio: ";
                cin >> alumnos[i].promedio;
                cout << "Fecha de nacimiento" << endl;
                cout << "- Dia: ";
                cin >> alumnos[i].fecha_nacimiento.dia;
                cout << "- Mes (numero de mes): ";
                cin >> alumnos[i].fecha_nacimiento.mes;
                cout << "- Año: ";
                cin >> alumnos[i].fecha_nacimiento.anio;
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Alumno " << i + 1 << endl;
                cout << "Nombre: " << alumnos[i].nombre << endl;
                cout << "Edad: " << alumnos[i].edad << endl;
                cout << "Año de ingreso: " << alumnos[i].anio_ingreso << endl;
                cout << "Promedio: " << alumnos[i].promedio << endl;
                cout << "Fecha de nacimiento" << endl;
                cout << "- Dia: " << alumnos[i].fecha_nacimiento.dia << endl;
                cout << "- Mes (numero de mes): " << alumnos[i].fecha_nacimiento.mes << endl;
                cout << "- Año: " << alumnos[i].fecha_nacimiento.anio << endl;
                cout << endl;
            }
            break;
        case 3:
            system("cls");
            cout << "1. Ordenar por edad (merge sort)" << endl;
            cout << "2. Ordenar por promedio (bucket sort)" << endl;
            cout << "3. Ordenar por año de ingreso (insertion sort)" << endl;
            cout << "4. Ordenar por año de nacimiento (quick sort)" << endl;
            cout << "Ingrese una opcion: ";
            cin >> op_menu;
            switch (op_menu)
            {
            case 1:
                for (int i = 0; i < cantidad; i++)
                {
                    arrEdades[i] = alumnos[i].edad;
                }
                mergeSort(arrEdades, 0, cantidad - 1);
                cout << "Las edades ordenadas serian: ";
                for (int i = 0; i < cantidad; i++)
                {
                    cout << arrEdades[i] << " ";
                }
                break;
            case 2:
                for (int i = 0; i < cantidad; i++)
                {
                    arrPromedios[i] = alumnos[i].promedio;
                }
                cout << "Los promedio ordenados serian: ";
                bucketSort(arrPromedios, cantidad);
                break;
            case 3:
                for (int i = 0; i < cantidad; i++)
                {
                    arrIngreso[i] = alumnos[i].anio_ingreso;
                }
                cout << "Los años de ingreso ordenados: ";
                insertionSort(arrIngreso, cantidad);
                break;
            case 4:
                for (int i = 0; i < cantidad; i++)
                {
                    arrNacimiento[i] = alumnos[i].fecha_nacimiento.anio;
                }
                cout << "Los años de nacimiento ordenados son: ";
                quickSort(arrNacimiento, 0, cantidad);
                break;
            default:
                cout << "Opcion de ordenamiento no valida..." << endl;
                break;
            }
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        cout << "\nDesea continuar? (s/n): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}