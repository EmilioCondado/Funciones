#include <iostream>
using namespace std;

int BuscarMax(int [], int);
void Intercambio(int[], int, int);
void Ordenar(int[], int);

int main()
{
    int A[] = { 1, 89, 15, 3, 54, 25, 68, 7, 44, 33};
    int n = 10;
    int posicion;

    Ordenar(A, n);
}

int BuscarMax(int a[], int t) {
    int Maximo = 0;
    int Position = 0;

    for (int i = 0; i < t; i++) {
        if (a[i] > Maximo) {
            Maximo = a[i];
            Position = i;
        }
    }
    return Position;
}

void Intercambio(int b[], int pos, int t) {
    int c = b[pos];
    b[pos] = b[t - 1];
    b[t - 1] = c;
    return;
}

void Ordenar(int c[], int t) {
    int pos;
    for (int m = t; m > 1; m--) {
        pos = BuscarMax(c, m);
        Intercambio(c, pos, m);
    }

    cout << "El arreglo ordenado es el siguiente: \n";

    for (int j = 0; j < t; j++){
        cout << "[" << c[j] << "],";
    }
    cout << "\n";

    return;
}