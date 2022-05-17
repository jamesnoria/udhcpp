#include <iostream>
using namespace std;

struct info_direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion direccion;
    double salario;
} empleado[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Ingrese el nombre de una persona: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        cout << "Ingrese la direccion: ";
        cin.getline(empleado[i].direccion.direccion, 30, '\n');
        cout << "Ingrese la ciudad: ";
        cin.getline(empleado[i].direccion.ciudad, 20, '\n');
        cout << "Ingrese la provincia: ";
        cin.getline(empleado[i].direccion.provincia, 20, '\n');
        cout << "Ingrese el salario: ";
        cin >> empleado[i].salario;
    }

    cout << "Nombre 1: " << empleado[0].nombre << endl;
    cout << "Direccion 1: " << empleado[0].direccion.direccion << endl;
    cout << "Ciudad 1: " << empleado[0].direccion.ciudad << endl;
    cout << "Provincia 1:" << empleado[0].direccion.provincia << endl;
    cout << "Salario 1:" << empleado[0].salario << endl;

    cout << "Nombre 2: " << empleado[1].nombre << endl;
    cout << "Direccion 2: " << empleado[1].direccion.direccion << endl;
    cout << "Ciudad 2: " << empleado[1].direccion.ciudad << endl;
    cout << "Provincia 2:" << empleado[1].direccion.provincia << endl;
    cout << "Salario 2:" << empleado[1].salario << endl;


    return 0;
}