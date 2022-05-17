/*
Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre,
pais, numero_medallas y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor numero de
medallas.
*/
#include <iostream>
using namespace std;

struct atleta
{
    char nombre[20];
    char pais[20];
    int medallas;
};

int main()
{
    cout << "¿Cuantos atletas desea ingresar?: ";
    int numeroAtletas;
    cin >> numeroAtletas;
    struct atleta atletas[numeroAtletas];

    for (int i = 0; i < numeroAtletas; i++)
    {
        cin.ignore();
        cout << "Ingrese nombre de atleta " << i + 1 << ": ";
        cin.getline(atletas[i].nombre, 20, '\n');
        cout << "Ingrese el nombre del pais: ";
        cin.getline(atletas[i].pais, 20, '\n');
        cout << "¿Cuantas medallas ha recibido?: ";
        cin >> atletas[i].medallas;
    }

    int indiceMayor, mayor = 0;
    for (int i = 0; i < numeroAtletas; i++)
    {
        if (atletas[i].medallas > mayor)
        {
            mayor = atletas[i].medallas;
            indiceMayor = i;
        }
    }

    cout << "\n\n === Atleta con mayor medallas ===\n";
    cout << "Nombre: " << atletas[indiceMayor].nombre << endl;
    cout << "Pais: " << atletas[indiceMayor].pais << endl;

    return 0;
}