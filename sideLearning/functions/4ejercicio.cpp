/*
Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos
que se transmitan a la funcion cuando sea llamada.
Suponga que los tres argumentos del mismo tipo de datos
*/

#include <iostream>
using namespace std;

template <class T>
T maximo(T n1, T n2, T n3)
{
    T max;

    if ((n1 >= n2) && (n1 >= n3))
    {
        max = n1;
    }
    else if ((n2 >= n1) && (n2 >= n3))
    {
        max = n2;
    }
    else
    {
        max = n3;
    }

    return max;
}

int main()
{
    int dato1 = 4, dato2 = 5, dato3 = 8;

    cout << "El maximo valor es: " << maximo(dato1, dato2, dato3) << endl;

    return 0;
}
