#include "stack.h"

int main() {
    Stack S;
    createStack(S);

    cout << "Masukkan data: ";
    getInputStream(S);

    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}