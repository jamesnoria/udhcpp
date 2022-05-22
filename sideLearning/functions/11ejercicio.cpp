/*
Realice una funcion que tome como parametros un vector y su tamaño y idga si el vector esta ordenado crecientemente
Sugerencia: Compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor
o igual que el elemento le precede en el vector
*/
#include <iostream>
using namespace std;

void pedirDatos();
void comprobarOrdenamiento(int vec[], int tam);

int vec[100], tam;

int main()
{
    pedirDatos();
    comprobarOrdenamiento(vec, tam);

    return 0;
}

void pedirDatos()
{
    cout << "Digite el numero de elementos del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

void comprobarOrdenamiento(int vec[], int tam)
{
    char band = 'F';
    int i = 0;
    while ((band == 'F') && (i < tam - 1))
    {
        if (vec[i] > vec[i + 1])
        {
            band = 'V';
        }
        i++;
    }

    if (band == 'F')
    {
        cout << "El arreglo esta ordenado crecientemente";
    }
    else
    {
        cout << "El arreglo NO esta ordenado";
    }
}