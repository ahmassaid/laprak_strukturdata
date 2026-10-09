#include <iostream>
using namespace std;

int main() {
    float bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    cout << "\nHasil Operasi Aritmatika:" << endl;
    cout << "Penjumlahan: " << bilangan1 + bilangan2 << endl;
    cout << "Pengurangan: " << bilangan1 - bilangan2 << endl;
    cout << "Perkalian  : " << bilangan1 * bilangan2 << endl;

    if (bilangan2 != 0) {
        cout << "Pembagian  : " << bilangan1 / bilangan2 << endl;
    } else {
        cout << "Pembagian  : Tidak dapat dibagi nol" << endl;
    }
    return 0;
}