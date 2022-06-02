/*
Solución pregunta 01
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char **argv)
{
    int M[5][5], i, j, elem, fil, col, band, cont, x, y, orden, A[20], P[10];

    cout << "Ingreso de datos a la matriz:\n";
    cout << "Cuantas filas: ";
    cin >> fil;
    cout << "Cuantas columnas: ";
    cin >> col;
    cout << "\nIngrese datos:\n";

    for (i = 0; i < fil; i++)
        for (j = 0; j < col; j++)
        {
            cout << "M[" << i << " " << j << "]: ";
            cin >> M[i][j];
        }

    cout << "\nMostrando Matriz: \n";
    for (i = 0; i < fil; i++)
    {
        cout << endl;
        for (j = 0; j < col; j++)
            cout << M[i][j] << "  ";
    }
    ///////////////////////
    orden = fil * col;
    x = 0;
    /// pasando matriz a arreglo
    for (i = 0; i < fil; i++)
        for (j = 0; j < col; j++)
        {
            A[x] = M[i][j];
            x++;
        }
    ////elem a eliminar
    cout << "\nElemento a eliminar: ";
    cin >> elem;

    band = 0;
    cont = 0;
    y = 0;
    for (i = 0; i < orden; i++)
        if (elem == A[i])
        {
            cont++;
            P[y] = i;
            y++;
        }
    //////////mostrar posiciones
    /*	cout<<"\nPosiciones:\n";
        for(i=0;i<cont;i++)
         cout<<"P["<<i<<"]: "<<P[i]<<" ";
    */
    //////////////////////
    y = 0;
    int f = 1;
    //	cout<<"\nvalor de cont: "<<cont<<endl;
    while (cont > 0)
    {
        for (i = P[y]; i < (orden - 1); i++)
        {
            A[i] = A[i + 1];
        }

        /* for(int z=0;z<(orden-1);z++)
          cout<<"A["<<z<<"]: "<<A[z]<<" ";
          */
        y++;

        // cout<<"\nvalor de P["<<y<<"]: "<<P[y]<<endl;
        P[y] = P[y] - f;

        cont--;
        f++;
        A[orden - 1] = 0;
        //	getch();
    }
    // cout<<"\nvalor de cont: "<<cont<<endl;
    // mostrando arreglo
    /*cout<<"\nMostrando arreglo: \n";
    for(i=0;i<orden;i++)
     cout<<"A["<<i<<"]: "<<A[i]<<" ";*/
    // pasando el arreglo a matriz
    x = 0;
    for (i = 0; i < fil; i++)
        for (j = 0; j < col; j++)
        {
            M[i][j] = A[x];
            x++;
        }
    ////mostrando nueva matriz
    cout << "\nMostrando Nueva Matriz: \n";
    for (i = 0; i < fil; i++)
    {
        cout << endl;
        for (j = 0; j < col; j++)
            cout << M[i][j] << "  ";
    }

    cout << "\n\n";
    return 0;
}