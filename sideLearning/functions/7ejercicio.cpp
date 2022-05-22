/*
Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg
y tres parametros de referencia enteros nombrados horas, min y seg. La funcion es convertir el numero de
segundos transmitido en un numero equivalente de horas, minutos y segundos.
*/
#include <iostream>
using namespace std;

void tiempo(int totalSeg, int &horas, int &minutos, int &segundos)
{
    horas = totalSeg / 3600;
    cout << "horas: " << horas << endl;
    totalSeg %= 3600;
    cout << "totalSeg: " << totalSeg << endl;
    minutos = totalSeg / 60;
    cout << "Minutos: " << minutos << endl;
    segundos = totalSeg % 60;
    cout << "Segundos: " << segundos << endl;
}

int main()
{
    int totalSeg, horas, minutos, segundos;

    cout << "Digite el numero total de segundos: ";
    cin >> totalSeg;

    tiempo(totalSeg, horas, minutos, segundos);
}