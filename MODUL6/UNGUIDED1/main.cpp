#include "Buku.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);
    
    infotype dataBuku;
    cout << "masukkan kode buku: ";
    cin >> dataBuku.kodeBuku;
    
    while (dataBuku.kodeBuku != ".") {
        cout << "masukkan judul buku: ";
        cin >> dataBuku.judul;
        cout << "masukkan tahun terbit: ";
        cin >> dataBuku.thnTerbit;
        
        address cek = findElm(L, dataBuku);
        if (cek != Nil) {
            cout << "kode buku sudah terdaftar" << endl;
        } else {
            address P = alokasi(dataBuku);
            insertLast(L, P);
        }
        
        cout << "\nmasukkan kode buku: ";
        cin >> dataBuku.kodeBuku;
    }
    
    cout << "\nDATA LIST 1" << endl;
    printInfo(L);
    
    return 0;
}