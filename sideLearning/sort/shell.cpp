// es una mejora del metodo de insercion directa
#include <iostream>
using namespace std;

void intercambio(float &x, float &y)
{
    float aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[], int n)
{
    int salto, i, j, k;
    salto = n / 2;

    while (salto > 0)
    {
        for (i = salto; i < n; i++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (a[j] <= a[k])
                {
                    j = -1;
                }
                else
                {
                    intercambio(a[j], a[k]);
                    j += salto;
                }
            }
        }
        salto /= 2;
    }
}

int main()
{
    float a[] = {4,6,1,12};

    ordenacionShell(a, 4);

    cout << "Ordenacion Shell: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}