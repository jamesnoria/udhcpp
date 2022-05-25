/*
&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n
*/

#include <iostream>
using namespace std;

int main()
{
    int *dir_num;

    int num = 20;
    dir_num = &num;

    cout << "Numero: " << *dir_num << endl;
    cout << "Dirección de memoria: " << &num << endl;

    return 0;
}