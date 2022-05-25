/*
Serie Fibonacci
*/

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int nElementos;

    do
    {
        cout << "Digite el numero de elementos: ";
        cin >> nElementos;
    } while (nElementos <= 0);

    for (int i = 0; i < nElementos; i++)
    {
        cout << fibonacci(i) << ", ";
    }

    cout << "\n";

    return 0;
}