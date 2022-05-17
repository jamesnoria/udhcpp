/*
Hacer 2 estructuras una llamada promedio que tendra los siguiente campos:
nota1, nota2, nota3, y otro llamada alumno que tendra los siguiente miembros:
nombre, sexo, edad, hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular sus promedio,
y por ultimo imprimir todos sus datos incluidos el promedio.
*/
#include <iostream>
using namespace std;

struct promedio
{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio promedioAlumno;
} alumno1;

int main()
{

    cout << "Ingrese el nombre del alumno: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cout << "Ingrese el sexo del alumno: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cout << "Ingrese su nota 1: ";
    cin >> alumno1.promedioAlumno.nota1;
    cout << "Ingrese su nota 2: ";
    cin >> alumno1.promedioAlumno.nota2;
    cout << "Ingrese su nota 3: ";
    cin >> alumno1.promedioAlumno.nota3;

    float promedio = (alumno1.promedioAlumno.nota1 + alumno1.promedioAlumno.nota2 + alumno1.promedioAlumno.nota3) / 3;

    cout << "Su promedio es: " << promedio << endl;

    return 0;
}