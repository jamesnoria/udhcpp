/*
Escriba una plantilla de funcion llamada despliegue() que muestre el valor
del argumento unico que se le transmite cuando es invocada la funcion
*/

#include <iostream>
using namespace std;

template <class TYPE>
void despliegue(TYPE num)
{
    cout << "El datos es: " << num << endl;
}

int main()
{
    int dato1 = 4;
    float dato2 = 4.5;
    double dato3 = 430.321;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}