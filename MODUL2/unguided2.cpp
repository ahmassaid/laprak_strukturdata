#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int t = *a; *a = *b; *b = *c; *c = t;
}
void tukarReference(int &a, int &b, int &c) {
    int t = a; a = b; b = c; c = t;
}
int main() {
    int x = 1, y = 2, z = 3;
    cout << "Awal: " << x << " " << y << " " << z << endl;
    tukarPointer(&x, &y, &z);
    cout << "Pointer: " << x << " " << y << " " << z << endl;
    x = 1; y = 2; z = 3;
    tukarReference(x, y, z);
    cout << "Reference: " << x << " " << y << " " << z << endl;

    return 0;
}