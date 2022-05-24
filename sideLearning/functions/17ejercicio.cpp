/*
Factorial de un numero 3! = 3*2!
*/

#include <iostream>
using namespace std;

int factorial(int);

int main()
{

    cout << factorial(5) << endl;

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        n = 1;
    }
    else
    {
        n = n * factorial(n - 1);
    }
    return n;
}