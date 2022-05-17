#include <iostream>
using namespace std;

int main()
{   
    int A[] = {3, 14, 15, 92, 6, 27, 4, 5, 2, 1};
    int i, pos, aux;

    for (i =0; i<5; i++){
        pos = i;
        aux = A[i];

        while (pos > 0 && A[pos-1] > aux){
            A[pos] = A[pos-1];
            pos--;
        }
        A[pos] = aux;
    }

    for (i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}