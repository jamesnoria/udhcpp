#include <iostream>
using namespace std;

struct Persona
{
    char nombre[20];
    int edad;
} persona1 = {"James", 26},
  persona2 = {"Ruperto", 15},
  persona3;

int main()
{

    cout << "Ingrese el nombre de una persona: ";
    cin.getline(persona3.nombre,20,'\n');
    cout << "Ingrese la edad: ";
    cin >> persona3.edad;

    cout << "Nombre 1: " << persona1.nombre << endl;
    cout << "Edad 1: " << persona1.edad << endl;

    cout << "Nombre 2: " << persona2.nombre << endl;
    cout << "Edad 2: " << persona2.edad << endl;

    cout << "Nombre 3: " << persona3.nombre << endl;
    cout << "Edad 3: " << persona3.edad << endl;

    return 0;
}