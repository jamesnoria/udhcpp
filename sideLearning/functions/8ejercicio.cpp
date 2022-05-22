/*
Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente el numero total de dias desde la
fecha 1/1/2000 y parametros de referencia nombrados año, mes y dia. La función es calcular el año, mes y dia actual para
el numero dado de dias que se le transmitan. Usando las referencias, la funcion debera alterar en forma directa
los argumentos respectivos en la funcion que llama. Para este problema  suponga que cada año tiene 365 dias y cada mes tiene
30 dias
*/

#include <iostream>
using namespace std;

void calc_anios(int totalDias, int &anio, int &mes, int &dias)
{
    anio = totalDias / 365;
    totalDias %= 365;
    mes = totalDias / 30;
    dias = totalDias % 30;
}

int main()
{
    int totalDias, anio, mes, dia;

    cout << "Digite el numero total de dias: ";
    cin >> totalDias;

    calc_anios(totalDias, anio, mes, dia);

    cout << "Fecha Actual: " << dia + 1 << "/" << mes + 1 << "/" << anio + 2000 << endl;

    return 0;
}