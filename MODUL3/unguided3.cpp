#include <iostream>
using namespace std;

void tampil(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

void tukarElemen(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int x = 100, y = 200;
    int *p1 = &x, *p2 = &y;

    cout << "Array A:\n"; tampil(A);
    cout << "Array B:\n"; tampil(B);

    tukarElemen(A, B, 1, 1);
    cout << "\nSetelah tukar elemen [1][1]:\n";
    cout << "Array A:\n"; tampil(A);
    cout << "Array B:\n"; tampil(B);

    cout << "\nx = " << x << ", y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "Setelah tukar pointer: x = " << x << ", y = " << y << endl;

    return 0;
}