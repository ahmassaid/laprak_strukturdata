#include <iostream>
using namespace std;

int arrA[] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
int n = 10;
int cariMinimum() {
    int min = arrA[0];
    for (int i = 1; i < n; i++) if (arrA[i] < min) min = arrA[i];
    return min;
}
int cariMaksimum() {
    int max = arrA[0];
    for (int i = 1; i < n; i++) if (arrA[i] > max) max = arrA[i];
    return max;
}
void hitungRataRata() {
    float total = 0;
    for (int i = 0; i < n; i++) total += arrA[i];
    cout << "Rata-rata: " << total / n << endl;
}
int main() {
    int p;
    do {
        cout << "\n1.Isi 2.Max 3.Min 4.Rata 5.Keluar\nPilih: ";
        cin >> p;
        switch (p) {
            case 1:
                for (int i = 0; i < n; i++) cout << arrA[i] << " ";
                cout << endl;
                break;
            case 2: cout << "Max: " << cariMaksimum() << endl; break;
            case 3: cout << "Min: " << cariMinimum() << endl; break;
            case 4: hitungRataRata(); break;
            case 5: cout << "Keluar.\n"; break;
        }
    } while (p != 5);
    return 0;
}