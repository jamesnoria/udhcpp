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
};

int main()
{

    char opci;
    int n_alumnos, op;

    cout << "Ingrese cuantos alumnos desea ingresar: ";
    cin >> n_alumnos;

    struct alumno alumnos[n_alumnos];

    do
    {
        cout << "* MENU DE OPCIONES *\n";
        cout << "* 1) Ingreso de datos                *\n";
        cout << "* 2) Mostrar Datos                   *\n";
        cout << "* 3) Ordenar por promedio            *\n";
        cout << "* 4) Eliminar un dato                *\n";
        cout << "*\n ...ELIJA UNA OPCION....: ";
        cin >> op;
        switch (op)
        {
        case 1:
            for (int i = 0; i < n_alumnos; i++)
            {
                cout << "Ingrese el nombre del alumno: ";
                cin.getline(alumnos[i].nombre, 20, '\n');
                cin.ignore();
                cout << "Ingrese el sexo del alumno: ";
                cin.getline(alumnos[i].sexo, 10, '\n');
                cin.ignore();
                cout << "Ingrese su edad: ";
                cin >> alumnos[i].edad;
                cin.ignore();
                cout << "Ingrese su nota 1: ";
                cin >> alumnos[i].promedioAlumno.nota1;
                cout << "Ingrese su nota 2: ";
                cin >> alumnos[i].promedioAlumno.nota2;
                cout << "Ingrese su nota 3: ";
                cin >> alumnos[i].promedioAlumno.nota3;
                cin.ignore();
            }
            break;
        case 2:
            for (int i = 0; i < n_alumnos; i++)
            {
                cout << "Nombre: " << alumnos[i].nombre << endl;
                cout << "Sexo: " << alumnos[i].sexo << endl;
                cout << "Edad: " << alumnos[i].edad << endl;
                cout << "Nota 1: " << alumnos[i].promedioAlumno.nota1 << endl;
                cout << "Nota 2: " << alumnos[i].promedioAlumno.nota2 << endl;
                cout << "Nota 3: " << alumnos[i].promedioAlumno.nota3 << endl;
                cout << "Promedio: " << (alumnos[i].promedioAlumno.nota1 + alumnos[i].promedioAlumno.nota2 + alumnos[i].promedioAlumno.nota3) / 3 << endl;
            }
            break;
        case 3:
            cout << "ORDENAR POR PROMEDIO (BURBUJA):\n";
            for (int i = 0; i < n_alumnos; i++)
            {
                for (int j = 0; j < n_alumnos; j++)
                {
                    if ((alumnos[i].promedioAlumno.nota1 + alumnos[i].promedioAlumno.nota2 + alumnos[i].promedioAlumno.nota3) / 3 > (alumnos[j].promedioAlumno.nota1 + alumnos[j].promedioAlumno.nota2 + alumnos[j].promedioAlumno.nota3) / 3)
                    {
                        struct alumno aux;
                        aux = alumnos[i];
                        alumnos[i] = alumnos[j];
                        alumnos[j] = aux;
                    }
                }
            }
            // mostrar promedios ordenados
            for (int i = 0; i < n_alumnos; i++)
            {
                cout << "Nombre: " << alumnos[i].nombre << endl;
                cout << "Sexo: " << alumnos[i].sexo << endl;
                cout << "Edad: " << alumnos[i].edad << endl;
                cout << "Nota 1: " << alumnos[i].promedioAlumno.nota1 << endl;
                cout << "Nota 2: " << alumnos[i].promedioAlumno.nota2 << endl;
                cout << "Nota 3: " << alumnos[i].promedioAlumno.nota3 << endl;
                cout << "Promedio: " << (alumnos[i].promedioAlumno.nota1 + alumnos[i].promedioAlumno.nota2 + alumnos[i].promedioAlumno.nota3) / 3 << endl;
            }
            break;
        }
        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> opci;
    } while (opci == 'S' || opci == 's');

    return 0;
}