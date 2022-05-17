// Bubble sort
#include <iostream>
using namespace std;

int main()
{
    int A[] = {3, 14, 15, 92, 6, 27, 4, 5, 2, 1};

    int i, j, aux;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (A[i] < A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}