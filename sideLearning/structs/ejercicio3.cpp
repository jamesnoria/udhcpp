/*
Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menos salario.
*/
#include <iostream>
using namespace std;

struct empleado
{
    char name[20];
    float salario;
};


int main()
{

    cout << "¿Cuantos empleados desea colocar o ingresar?: ";
    int cantEmpleados;
    cin >> cantEmpleados;
    struct empleado trabajadores[cantEmpleados];

    for (int i = 0; i < cantEmpleados; ++i)
    {
        cout << "Nombre del empleado " << i + 1 << ": ";
        cin.ignore();
        cin.getline(trabajadores[i].name, 20, '\n');
        cout << "Salario del empleado: ";
        cin >> trabajadores[i].salario;
    }

    float mayor = 0, menor = 1000;
    int posMay, posMen;

    for (int i = 0; i < cantEmpleados; ++i)
    {
        if (trabajadores[i].salario > mayor) {
            mayor = trabajadores[i].salario;
            posMay = i;
        }
        if (trabajadores[i].salario < menor) {
            menor = trabajadores[i].salario;
            posMen = i;
        }
    }

    cout << "Empleado con mayor salario: " << trabajadores[posMay].name << endl;
    cout << "Empleado con menor salario: " << trabajadores[posMen].name << endl;

    return 0;
}