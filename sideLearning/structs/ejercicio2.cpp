/*
Hacer una estructura llamada alumno en la cual se tendran los siguientes Campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los tres
tiene el mejor promedio y posteriormente imprimir los datos del alumno.
*/

#include <iostream>
using namespace std;

struct Alumno
{
    char nombre[20];
    int edad;
    float promedio;
} a[3];

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin.getline(a[i].nombre, 20, '\n');
        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        cin >> a[i].edad;
        cout << "Ingrese el promedio del alumno " << i + 1 << ": ";
        cin >> a[i].promedio;
        cin.ignore();
    }

    float mayor=0;
    int posicion;

    for (int i = 0; i < 3; ++i)
    {
        if (a[i].promedio > mayor)
        {
            mayor = a[i].promedio;
            posicion = i;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << "=== ALUMNO " << i + 1 << " ===\n";
        cout << "Nombre: " << a[i].nombre << endl;
        cout << "Edad: " << a[i].edad << endl;
        cout << "Promedio: " << a[i].promedio << endl;
    }

    cout << "El mayor promedio lo tiene el Alumno " << a[posicion].nombre;

    return 0;
}