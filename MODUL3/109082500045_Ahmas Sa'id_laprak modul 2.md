# <h1 align="center">Laporan Praktikum Modul 3 - Abstract Data Type (ADT)</h1>
<p align="center">Ahmas Sa'id - 109082500045</p>

## Dasar Teori
Abstract Data Type (ADT) adalah TYPE dan sekumpulan PRIMITIF (operasi dasar) terhadap TYPE tersebut. Selain itu, dalam sebuah ADT yang lengkap, disertakan pula definisi invarian dari TYPE dan aksioma yang berlaku. ADT merupakan definisi STATIK [1]. Definisi type dari sebuah ADT dapat mengandung sebuah definisi ADT lain. Misalnya ADT waktu yang terdiri dari ADT JAM dan ADT DATE, atau Garis terdiri dari dua buah ADT POINT [1].
TYPE diterjemahkan menjadi type terdefinisi dalam bahasa yang bersangkutan. Jika dalam bahasa C menggunakan struct PRIMITIF, dalam konteks prosedural, diterjemahkan menjadi fungsi atau prosedur. PRIMITIF dikelompokkan menjadi: Konstruktor/Kreator, Selector, Prosedur pengubah nilai komponen, Tipe validator komponen, Destruktor/Dealokator, Baca/Tulis, Operator relasional, Aritmatika, dan Konversi dari tipe tersebut ke tipe dasar dan sebaliknya [1].
ADT biasanya diimplementasikan menjadi dua buah modul utama dan 1 modul interface program utama (driver). Dua modul tersebut adalah sebagai berikut:
1. Definisi/Spesifikasi Type dan Primitif/Header fungsi (.h)
Spesifikasi type sesuai dengan kaidah bahasa yang dipakai
Spesifikasi dari primitif sesuai dengan kaidah dalam konteks prosedural, yaitu:
Fungsi: nama, domain, range, dan prekondisi jika ada
Prosedur: Initial state, Final state, dan proses yang dilakukan
2. Body/realisasi dari primitif (.c)
Berupa kode program dalam bahasa yang bersangkutan (dalam praktikum ini berarti dengan bahasa C++). Realisasi fungsi dan prosedur harus sedapat mungkin memanfaatkan selector dan konstruktor [1].

## Guided 

### 1. Program ADT Mahasiswa (Implementasi Konsep ADT)
Program ini merupakan implementasi konsep ADT (Abstract Data Type) yang memisahkan deklarasi tipe, variabel, dan fungsi ke dalam file .h, serta memisah definisi fungsi ke dalam file .cpp. Program terdiri dari tiga file: mahasiswa.h, mahasiswa.cpp, dan main.cpp.

```C++
File: mahasiswa.h
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs (mahasiswa &m) ;
float rata2 (mahasiswa m) ;
#endif // MAHASISWA_H_INCLUDED

File: mahasiswa.cpp
#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input nilai2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1+m.nilai2)/2;
}

File: main.cpp
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main()
{
    mahasiswa mhs;
    inputMhs (mhs) ;
    cout << "rata-rata = " << rata2 (mhs) ;
    return 0;
}
```
Program ini mendemonstrasikan penerapan konsep ADT dengan memisahkan deklarasi tipe dan primitif ke dalam file header (mahasiswa.h), realisasi primitif ke dalam file implementasi (mahasiswa.cpp), dan program utama (main.cpp). Struktur mahasiswa memiliki field nim, nilai1, dan nilai2. Prosedur inputMhs digunakan untuk mengisi data mahasiswa, sedangkan fungsi rata2 menghitung rata-rata dari dua nilai. Program utama memanggil prosedur inputMhs untuk mengisi data, kemudian menampilkan hasil rata-rata menggunakan fungsi rata2.

### 2. Pointer dan Alamat Memori

```C++
#include <iostream>
using namespace std;

int main() {
    char a;
    int j;
    char arr[6];

    arr[3] = 'b';
    a = 'u';

    cout << a << endl;
    cout << &a << endl;

    cout << j << endl;
    cout << &j << endl;

    cout << &arr[4] << endl;

    return 0;
}
```
Program ini menunjukkan bagaimana variabel dialokasikan di memori. Dengan menggunakan operator &, kita dapat melihat alamat memori dari setiap variabel. Output menunjukkan nilai dan alamat dari variabel a, j, dan elemen array arr[4]. Alamat memori ditampilkan dalam format heksadesimal.

### 3. Pointer ke Variabel

```C++
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}
```
Program ini mendemonstrasikan penggunaan pointer. Pointer px menyimpan alamat dari variabel x. Nilai y diisi dengan nilai yang ditunjuk oleh px (yaitu nilai x). Program menampilkan alamat x, isi px, nilai x, nilai yang ditunjuk px, dan nilai y.

### 4. Pointer dan String

```C++
#include <iostream>
using namespace std;

int main() {
    char nama[] = "strukdat";

    cout << nama << endl;
    cout << nama[3] << endl;

    return 0;
}
```
Program ini menunjukkan hubungan antara pointer dan string. nama adalah array karakter yang berisi string "strukdat". cout << nama akan menampilkan seluruh string, sedangkan cout << nama[3] akan menampilkan karakter pada indeks ke-3, yaitu 'k'.

### 5. Fungsi (maks3)

```C++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main(){
    int x,y,z;
    cout << "masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 = ";
    cin >> z;
    cout << "nilai maksimumnya adalah = " << maks3(x,y,z);
    return 0;
}
int maks3(int a, int b, int c){
    int temp_max = a;
    if(b > temp_max)
    temp_max = b;
    if(c > temp_max)
    temp_max = c;
    return (temp_max);
}
```
Program ini mendemonstrasikan penggunaan fungsi. Fungsi maks3 menerima tiga parameter integer dan mengembalikan nilai maksimum dari ketiganya. Fungsi ini dipanggil dari main setelah pengguna memasukkan tiga bilangan.

### 6. Parameter Fungsi (Call by Value, Pointer, Reference)

```C++
#include <iostream>
using namespace std;

// 1. Call by Value: variabel asli TIDAK berubah
void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// 2. Call by Pointer: variabel asli IKUT berubah (pakai *)
void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 3. Call by Reference: variabel asli IKUT berubah (pakai &)
void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 6;

    // Tes Call by Value
    tukarValue(a, b);
    cout << "Setelah Call by Value    -> a = " << a << ", b = " << b << " (Tetap)" << endl;

    // Tes Call by Pointer (kirim alamatnya pakai &)
    tukarPointer(&a, &b);
    cout << "Setelah Call by Pointer  -> a = " << a << ", b = " << b << " (Berubah!)" << endl;

    // Tes Call by Reference (mengembalikan posisi semula)
    tukarReference(a, b);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << " (Berubah lagi!)" << endl;

    return 0;
}
```
Program ini mendemonstrasikan tiga cara melewatkan parameter ke dalam fungsi. tukarValue menggunakan call by value, di mana nilai a dan b disalin ke parameter formal, sehingga nilai asli tidak berubah. tukarPointer menggunakan call by pointer, di mana alamat memori a dan b dikirim, sehingga fungsi dapat mengubah nilai asli. tukarReference menggunakan call by reference, di mana parameter formal menjadi alias dari variabel asli, sehingga perubahan di dalam fungsi juga mengubah nilai asli.

## Unguided 

### 1. Program Operasi Matriks 3x3 (Penjumlahan, Pengurangan, Perkalian)

```C++
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], H[3][3], p;

    cout << "Matriks A:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> A[i][j];

    cout << "Matriks B:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> B[i][j];

    cout << "1.Jumlah 2.Kurang 3.Kali\nPilih: ";
    cin >> p;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (p == 1) H[i][j] = A[i][j] + B[i][j];
            else if (p == 2) H[i][j] = A[i][j] - B[i][j];
            else {
                H[i][j] = 0;
                for (int k = 0; k < 3; k++) H[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Hasil:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << H[i][j] << " ";
        cout << endl;
    }
    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/ahmassaid/laprak2-strukturdata/blob/main/output1unguided1.png)
##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/ahmassaid/laprak2-strukturdata/blob/main/output2unguided1.png)
##### Output 3
![Screenshot Output Unguided 1_3](https://github.com/ahmassaid/laprak2-strukturdata/blob/main/output3unguided1.png)

Program ini menerima input dua matriks 3x3 dari pengguna. Setelah itu, pengguna memilih operasi (penjumlahan, pengurangan, atau perkalian) melalui menu. Program kemudian menghitung dan menampilkan hasilnya. Untuk perkalian matriks, digunakan perulangan bersarang dengan indeks k untuk menjumlahkan hasil kali elemen baris matriks A dengan kolom matriks B.

### 2. Program Menukar Nilai 3 Variabel (Pointer & Reference)

```C++
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
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/ahmassaid/laprak2-strukturdata/blob/main/output_unguided2.png)

Program ini memiliki dua fungsi untuk menukar nilai dari tiga variabel. Fungsi tukarPointer menggunakan pointer untuk mengakses dan mengubah nilai asli dari variabel yang dikirim alamatnya. Fungsi tukarReference menggunakan reference (alias) untuk mengubah nilai variabel asli secara langsung. Kedua fungsi menghasilkan pertukaran nilai yang sama, namun dengan cara yang berbeda dalam hal mekanisme pengiriman parameter.

### 3. Program Menu Array (Min, Max, Rata-rata)

```C++
source code unguided 3
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/ahmassaid/laprak2-strukturdata/blob/main/output_unguided3.png)

Program ini menggunakan array satu dimensi arrA yang sudah diinisialisasi. Program menyediakan menu interaktif menggunakan do-while dan switch-case. Pengguna dapat memilih untuk menampilkan seluruh isi array, mencari nilai maksimum menggunakan fungsi cariMaksimum(), mencari nilai minimum menggunakan fungsi cariMinimum(), atau menghitung rata-rata menggunakan prosedur hitungRataRata(). Program akan terus berjalan hingga pengguna memilih menu keluar.

## Kesimpulan
Dari praktikum Modul 2 ini, dapat disimpulkan bahwa array, pointer, dan reference adalah konsep dasar dalam manipulasi data di memori, sedangkan fungsi dan prosedur berperan penting dalam membuat program lebih terstruktur dan mengurangi duplikasi kode. Pemahaman tentang cara melewatkan parameter (call by value, pointer, reference) juga sangat krusial karena mempengaruhi apakah nilai asli variabel akan berubah atau tidak.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.