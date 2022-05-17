/* Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarlo a una
categoria de competición;
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40
Posteriormente imprimir todos los datos del corredor, incluida su categoria de
competicion*/

#include <iostream>
using namespace std;

struct Corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
} c1;

int main() {
    cout << "Nombre: ";
    cin.getline(c1.nombre, 20, '\n');
    cout << "Edad: ";
    cin >> c1.edad;
    cout << "Sexo: ";
    cin.ignore();
    cin.getline(c1.sexo, 10, '\n');
    cout << "Club: ";
    cin.getline(c1.club, 20, '\n');

    if (c1.edad <= 18) {
        cout << "Categoria Juvenil" << endl;
    }
    else if ((c1.edad <= 40) && (c1.edad > 18)) {
        cout << "Categoria Señor" << endl;
    }
    else {
        cout << "Categoria Veterano" << endl;
    }

    cout << "Nombre: " << c1.nombre << endl;
    cout << "Edad: " << c1.edad << endl;
    cout << "Sexo: " << c1.sexo << endl;
    cout << "Club: " << c1.club << endl;

    return 0;
}