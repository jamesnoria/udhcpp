#include <iostream>
#include <cstring>
using namespace std;

struct medicina {
    int id;
    char nombre[20];
    int cantidad;
    float precio;
};

int main()
{
    medicina medicinas[10];
    int opcion, id, cantidad;
    float precio;
    char nombre[20];
    do
    {
        cout << "1. Agregar medicinas" << endl;
        cout << "2. Eliminar medicina" << endl;
        cout << "3. Modificar medicina" << endl;
        cout << "4. Mostrar medicina" << endl;
        cout << "5. Lista doblemente enlazada" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el id: ";
            cin >> id;
            cout << "Ingrese el nombre: ";
            cin >> nombre;
            cout << "Ingrese la cantidad: ";
            cin >> cantidad;
            cout << "Ingrese el precio: ";
            cin >> precio;
            medicinas[id].id = id;
            strcpy(medicinas[id].nombre, nombre);
            medicinas[id].cantidad = cantidad;
            medicinas[id].precio = precio;
            break;
        case 2:
            cout << "Ingrese el id: ";
            cin >> id;
            medicinas[id].id = 0;
            strcpy(medicinas[id].nombre, "");
            medicinas[id].cantidad = 0;
            medicinas[id].precio = 0;
            break;
        case 3:
            cout << "Ingrese el id: ";
            cin >> id;
            cout << "Ingrese el nombre: ";
            cin >> nombre;
            cout << "Ingrese la cantidad: ";
            cin >> cantidad;
            cout << "Ingrese el precio: ";
            cin >> precio;
            medicinas[id].id = id;
            strcpy(medicinas[id].nombre, nombre);
            medicinas[id].cantidad = cantidad;
            medicinas[id].precio = precio;
            break;
        case 4:
            cout << "Ingrese el id: ";
            cin >> id;
            cout << "El id es: " << medicinas[id].id << endl;
            cout << "El nombre es: " << medicinas[id].nombre << endl;
            cout << "La cantidad es: " << medicinas[id].cantidad << endl;
            cout << "El precio es: " << medicinas[id].precio << endl;
            break;
        case 5:
            cout << "Lista doblemente enlazada" << endl;
            int i = 0;
            do
            {
                int tecla = getch();
                if (tecla == 'B') {
                    if (i > 0) {
                        i--;
                    }
                }
            } while (true);
            break;
        case 6:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (opcion != 5);
    return 0;
}