#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], H[3][3], p;

    cout << "Matriks A:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> A[i][j];

    cout << "Matriks B:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> B[i][j];

    cout << "1.Jumlah 2.Kurang 3.Kali\nPilih: ";
    cin >> p;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (p == 1) H[i][j] = A[i][j] + B[i][j];
            else if (p == 2) H[i][j] = A[i][j] - B[i][j];
            else {
                H[i][j] = 0;
                for (int k = 0; k < 3; k++) H[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Hasil:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << H[i][j] << " ";
        cout << endl;
    }
    return 0;
}