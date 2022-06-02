#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// MERGE SORT

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// BUCKET SORT

void bucketSort(float arr[], int tam)
{
    // Encontrar el maximo elemento
    float max = arr[0];
    for (int i = 1; i < tam; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Rango de cada bucket
    float rango = float(max) / float(tam);

    // Crear los buckets
    vector<float> buckets[tam];

    // Inicializar los buckets
    for (int i = 0; i < tam; i++)
    {
        int index = int(arr[i] / rango);
        // cout << "index: " << index << endl;
        if (index != tam)
        {
            buckets[index].push_back(arr[i]);
        }
        else
        {
            buckets[tam - 1].push_back(arr[i]);
        }
    }

    // Ordenar los elementos de cada bucket
    for (int i = 0; i < tam; i++)
    {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Imprimiendo los elementos ordenados
    int j = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            cout << buckets[i][j] << " ";
        }
    }
}

// Inserción

void insertionSort(int arr[], int tam)
{
    int i, pos, aux;

    for (i = 0; i < tam; i++)
    {
        pos = i;
        aux = arr[i];

        while (pos > 0 && arr[pos - 1] > aux)
        {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = aux;
    }

    for (i = 0; i < tam; i++)
    {
        cout << arr[i] << " ";
    }
}

// Quick Sort

void quickSort(float a[], int primero, int ultimo)
{
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do
    {
        while (a[i] < pivote)
            i++;
        while (a[j] > pivote)
            j--;
        if (i <= j)
        {
            float temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j)
        quickSort(a, primero, j); // ordenar los menores
    if (i < ultimo)
        quickSort(a, i, ultimo); // ordenar los mayores

    for (int i = 0; i < ultimo; i++)
        cout << a[i] << " ";
}

struct Alumnos
{
    char nombre[30];
    int edad;
    int anio_ingreso; // ej: 2019-2020-2021
    float promedio;   // ej: 19.5, 10.0, etc.
    struct fecha_nacimiento
    {
        int dia;
        int mes;
        int anio;
    } fecha_nacimiento;
};

int main()
{
    setlocale(LC_ALL, "spanish");

    int cantidad, op_menu;
    char opcion;
    int arrEdades[50], arrIngreso[50];
    float arrPromedios[50], arrNacimiento[50];

    cout << "Cuantos alumnos desea ingresar?: ";
    cin >> cantidad;

    Alumnos alumnos[cantidad];

    do
    {
        cout << "=== MENU ===" << endl;
        cout << "1. Ingresar datos" << endl;
        cout << "2. Mostrar datos" << endl;
        cout << "3. Ordenar datos por metodo" << endl;

        cout << "Ingrese una opcion: ";
        cin >> op_menu;

        switch (op_menu)
        {
        case 1:
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Ingrese los datos del alumno " << i + 1 << endl;
                cin.ignore();
                cout << "Nombre: ";
                cin.getline(alumnos[i].nombre, 30, '\n');
                cout << "Edad: ";
                cin >> alumnos[i].edad;
                cout << "Año de ingreso: ";
                cin >> alumnos[i].anio_ingreso;
                cout << "Promedio: ";
                cin >> alumnos[i].promedio;
                cout << "Fecha de nacimiento" << endl;
                cout << "- Dia: ";
                cin >> alumnos[i].fecha_nacimiento.dia;
                cout << "- Mes (numero de mes): ";
                cin >> alumnos[i].fecha_nacimiento.mes;
                cout << "- Año: ";
                cin >> alumnos[i].fecha_nacimiento.anio;
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Alumno " << i + 1 << endl;
                cout << "Nombre: " << alumnos[i].nombre << endl;
                cout << "Edad: " << alumnos[i].edad << endl;
                cout << "Año de ingreso: " << alumnos[i].anio_ingreso << endl;
                cout << "Promedio: " << alumnos[i].promedio << endl;
                cout << "Fecha de nacimiento" << endl;
                cout << "- Dia: " << alumnos[i].fecha_nacimiento.dia << endl;
                cout << "- Mes (numero de mes): " << alumnos[i].fecha_nacimiento.mes << endl;
                cout << "- Año: " << alumnos[i].fecha_nacimiento.anio << endl;
                cout << endl;
            }
            break;
        case 3:
            cout << "1. Ordenar por edad (merge sort)" << endl;
            cout << "2. Ordenar por promedio (bucket sort)" << endl;
            cout << "3. Ordenar por año de ingreso (insertion sort)" << endl;
            cout << "4. Ordenar por año de nacimiento (quick sort)" << endl;
            cout << "Ingrese una opcion: ";
            cin >> op_menu;
            switch (op_menu)
            {
            case 1:
                for (int i = 0; i < cantidad; i++)
                {
                    arrEdades[i] = alumnos[i].edad;
                }
                mergeSort(arrEdades, 0, cantidad - 1);
                cout << "Las edades ordenadas serian: ";
                for (int i = 0; i < cantidad; i++)
                {
                    cout << arrEdades[i] << " ";
                }
                break;
            case 2:
                for (int i = 0; i < cantidad; i++)
                {
                    arrPromedios[i] = alumnos[i].promedio;
                }
                cout << "Los promedio ordenados serian: ";
                bucketSort(arrPromedios, cantidad);
                break;
            case 3:
                for (int i = 0; i < cantidad; i++)
                {
                    arrIngreso[i] = alumnos[i].anio_ingreso;
                }
                cout << "Los años de ingreso ordenados: ";
                insertionSort(arrIngreso, cantidad);
                break;
            case 4:
                for (int i = 0; i < cantidad; i++)
                {
                    arrNacimiento[i] = alumnos[i].fecha_nacimiento.anio;
                }
                cout << "Los años de nacimiento ordenados son: ";
                quickSort(arrNacimiento, 0, cantidad);
                break;
            default:
                cout << "Opcion de ordenamiento no valida..." << endl;
                break;
            }
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        cout << "\nDesea continuar? (s/n): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}