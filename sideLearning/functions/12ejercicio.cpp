/*
Realiza una funcion que tome como parametros un vector de numeros y su tamaño ya cambie el signo de los
elementos del vector
*/

#include <iostream>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int tam);

int vec[100], tam;

int main()
{
    return 0;
}

void pedirDatos()
{
    cout << "Digite el tamaño del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> tam;
    }
}

void cambiarSigno(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
}