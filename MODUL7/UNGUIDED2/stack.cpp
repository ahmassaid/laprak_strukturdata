#include "stack.h"

void createStack(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top >= MAX_STACK;
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.top] = x;
        S.top++;
    } else {
        cout << "Stack penuh, data tidak bisa ditambahkan" << endl;
    }
}

infotype pop(Stack &S) {
    if (!isEmpty(S)) {
        S.top--;
        return S.info[S.top];
    } else {
        cout << "Stack kosong, tidak ada data yang bisa diambil" << endl;
        return -999;
    }
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Isi stack (dari TOP): ";
        for (int i = S.top - 1; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    for (int i = 0; i < S.top / 2; i++) {
        int temp = S.info[i];
        S.info[i] = S.info[S.top - 1 - i];
        S.info[S.top - 1 - i] = temp;
    }
}

void pushAscending(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Stack penuh, data tidak bisa ditambahkan" << endl;
        return;
    }

    infotype temp[MAX_STACK];
    int n = 0;

    while (!isEmpty(S) && S.info[S.top - 1] > x) {
        temp[n++] = pop(S);
    }

    push(S, x);

    for (int i = n - 1; i >= 0; i--) {
        push(S, temp[i]);
    }
}

void getInputStream(Stack &S) {
    char c;
    while (cin.get(c) && c != '\n') {
        if (!isFull(S)) {
            push(S, (infotype)c);
        } else {
            break;
        }
    }
}