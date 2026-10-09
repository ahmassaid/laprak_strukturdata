#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = n - i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int k = 1; k <= n - i; k++) {
            cout << k;
            if (k < n - i) cout << " ";
        }
        cout << endl;
    }
    cout << "*" << endl;
    return 0;
}
