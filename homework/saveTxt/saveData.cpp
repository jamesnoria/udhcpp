#include <iostream>
#include <fstream>
using namespace std;

int main () {

  cout << "Ingrese el tamaño del arreglo: ";
  int n;
  cin >> n;
  int arr[n];

  ofstream myfile ("prueba.txt");
  if (myfile.is_open())
  {
    myfile << "*** BASE DE DATOS ***.\n";
    for(int i = 0; i < n; i ++){
      cout << "Ingrese elemento para A[" << i << "]: ";
      cin >> arr[i];
      myfile << arr[i] << "\n"; 
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}