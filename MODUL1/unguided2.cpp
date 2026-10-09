#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar rentang 0-100." << endl;
        return 0;
    }
    if (angka == 100) {
        cout << "seratus" << endl;
    } else if (angka == 0) {
        cout << "nol" << endl;
    } else {
        string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam",
                           "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
        if (angka < 12) {
            cout << satuan[angka] << endl;
        } else if (angka < 20) {
            cout << satuan[angka - 10] << " belas" << endl;
        } else {
            int puluhan = angka / 10;
            int sisa = angka % 10;

            cout << satuan[puluhan] << " puluh";
            if (sisa > 0) {
                cout << " " << satuan[sisa];
            }
            cout << endl;
        }
    }
    return 0;
}
