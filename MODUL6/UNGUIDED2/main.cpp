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
    
    infotype cariBuku;
    cout << "Masukkan Kode Buku yang dicari : ";
    cin >> cariBuku.kodeBuku;
    
    address hasil = findElm(L, cariBuku);
    
    if (hasil != Nil) {
        cout << "\nKode Buku   : " << hasil->info.kodeBuku << endl;
        cout << "Judul       : " << hasil->info.judul << endl;
        cout << "Tahun Terbit: " << hasil->info.thnTerbit << endl;
    } else {
        cout << "\nBuku dengan kode " << cariBuku.kodeBuku << " tidak ditemukan." << endl;
    }
    
    return 0;
}