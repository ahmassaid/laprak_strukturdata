#include "Buku.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);
    
    infotype b1 = {"B001", "Algoritma", 2020};
    infotype b2 = {"B003", "Struktur_Data", 2018};
    infotype b3 = {"B004", "Jaringan_Komputer", 2022};
    
    insertLast(L, alokasi(b1));
    insertLast(L, alokasi(b2));
    insertLast(L, alokasi(b3));
    
    infotype cariHapus;
    cout << "Masukkan Kode Buku yang akan dihapus : ";
    cin >> cariHapus.kodeBuku;
    
    address nodeHapus = findElm(L, cariHapus);
    
    if (nodeHapus != Nil) {
        if (nodeHapus == L.First) {
            address P;
            deleteFirst(L, P);
        } else if (nodeHapus == L.Last) {
            address P;
            deleteLast(L, P);
        } else {
            address Prec = nodeHapus->prev;
            address P;
            deleteAfter(Prec, P);
        }
        cout << "Data dengan kode buku " << cariHapus.kodeBuku << " berhasil dihapus.\n" << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    
    cout << "DATA LIST 1" << endl;
    printInfo(L);
    
    return 0;
}