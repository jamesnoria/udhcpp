/*
Paso de parametros de tipo estructura
*/

#include <iostream>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
} p1;

void mostrarDatos(Persona p)
{
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}

int main()
{
    mostrarDatos(p1);

    return 0;
}