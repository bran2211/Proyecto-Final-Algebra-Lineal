#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main() {
    int A[50][50], B[50][50], R[50][50];
    int m = 0, n = 0;
    cout << "Filas de matriz A: "; cin >> m;
    cout << "Columnas de matriz A: "; cin >> n;
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]:";
            cin >> A[i][j];
        }
    }
    cout << "Filas de matriz B: " << m << endl;
    cout << "Columnas de matriz B: " << n << endl;
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "B[" << i << "][" << j << "]:";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "Matriz A: " << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int x = 0; x < n; ++x)
        {
            cout << A[i][x] << " ";
        }
        cout << endl;
    }
    cout << "Matriz B: " << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int x = 0; x < n; ++x)
        {
            cout << B[i][x] << " ";
        }
        cout << endl;
    }
    cout << "Matriz Resultante: " << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int x = 0; x < n; ++x)
        {
            cout << R[i][x] << " ";
        }
        cout << endl;
    }
    return 0;
}