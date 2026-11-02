#include "Buku.h"
#include <iostream>
using namespace std;

void CreateList(List &L) {
    L.First = Nil;
    L.Last = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void insertLast(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        L.Last = P;
    } else {
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

void printInfo(List L) {
    if (L.First == Nil) {
        cout << "List Kosong" << endl;
    } else {
        address P = L.Last;
        while (P != Nil) {
            cout << "kode buku : " << P->info.kodeBuku << endl;
            cout << "judul     : " << P->info.judul << endl;
            cout << "tahun     : " << P->info.thnTerbit << endl;
            cout << endl;
            P = P->prev;
        }
    }
}

address findElm(List L, infotype x) {
    address P = L.First;
    while (P != Nil) {
        if (P->info.kodeBuku == x.kodeBuku) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}