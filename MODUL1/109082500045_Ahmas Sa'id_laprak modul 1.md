# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Ahmas Sa'id - 109082500045</p>

## Dasar Teori
Bahasa C++ diciptakan oleh Bjarne Stroustrup di AT&T Bell Laboratories pada awal tahun 1980-an sebagai pengembangan dari bahasa C, yang kemudian disempurnakan dengan fasilitas pembebanlebihan operator dan fungsi[1]. Code Blocks merupakan salah satu IDE (Integrated Development Environment) yang bersifat _free_, _open-source_, dan _cross-platform_, serta berorientasi pada C/C++/Fortran. Dalam praktikum Struktur Data, Code Blocks digunakan sebagai lingkungan pengembangan untuk menulis, meng-_compile_, dan menjalankan program C++[1].
Secara umum, struktur bahasa pemrograman C++ terdiri dari header file (misalnya `#include <iostream>`), deklarasi variabel dan konstanta, serta fungsi utama `main()` sebagai titik masuk eksekusi program. Data berdasarkan jenisnya dibagi dalam 5 kelompok tipe data dasar, yaitu bilangan bulat (integer), bilangan real presisi tunggal (float), bilangan real presisi ganda (double), karakter (char), dan tak-bertipe (void)[1].
Untuk berinteraksi dengan pengguna, C++ menyediakan fungsi `cout` untuk mencetak (output) data ke layar dan `cin` untuk menerima (input) data dari keyboard[1]. Selain itu, C++ juga menyediakan berbagai jenis operator seperti operator aritmatika, operator pengerjaan (assignment), operator logika, dan operator kondisional, serta struktur kendali seperti `if`, `if-else`, dan `switch` untuk pengambilan keputusan, serta `for`, `while`, dan `do...while` untuk perulangan[1].

## Unguided

### 1. Buatlah program yang menerima input-an dua buah bilangan bertipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

#include <iostream>
using namespace std;

int main() {
float bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    cout << "\nHasil Operasi Aritmatika:" << endl;
    cout << "Penjumlahan: " << bilangan1 + bilangan2 << endl;
    cout << "Pengurangan: " << bilangan1 - bilangan2 << endl;
    cout << "Perkalian  : " << bilangan1 * bilangan2 << endl;

    if (bilangan2 != 0) {
        cout << "Pembagian  : " << bilangan1 / bilangan2 << endl;
    } else {
        cout << "Pembagian  : Tidak dapat dibagi nol" << endl;
    }
    return 0;
}

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/ahmassaid/laprak1-strukturdata/blob/main/LAPRAK%20SOAL1.png)

Program ini mendeklarasikan dua variabel bertipe float untuk menampung bilangan desimal sesuai ketentuan soal. Program menggunakan cin untuk menerima input dari pengguna, kemudian melakukan empat operasi aritmatika dasar yaitu penjumlahan (+), pengurangan (-), perkalian (\*), dan pembagian (/). Hasil setiap operasi ditampilkan menggunakan cout. Terdapat kondisi if untuk memastikan program tidak melakukan pembagian dengan nol, karena pembagian dengan nol akan menyebabkan runtime error.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100. Contoh: 79 : tujuh puluh Sembilan

#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar rentang 0-100." << endl;
        return 0;
    }
    if (angka == 100) {
        cout << "seratus" << endl;
    } else if (angka == 0) {
        cout << "nol" << endl;
    } else {
        string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam",
                           "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
        if (angka < 12) {
            cout << satuan[angka] << endl;
        } else if (angka < 20) {
            cout << satuan[angka - 10] << " belas" << endl;
        } else {
            int puluhan = angka / 10;
            int sisa = angka % 10;

            cout << satuan[puluhan] << " puluh";
            if (sisa > 0) {
                cout << " " << satuan[sisa];
            }
            cout << endl;
        }
    }
    return 0;
}

##### Output 2

![Screenshot Output Unguided 2_1](https://github.com/ahmassaid/laprak1-strukturdata/blob/main/LAPRAK%20SOAL2.png)

Program ini menerima input berupa bilangan bulat positif 0–100. Logika utamanya menggunakan struktur percabangan if-else bertingkat. Jika angka 100, output "seratus"; jika 0, output "nol". Untuk angka di bawah 12, program mengambil string dari array satuan. Untuk angka 12–19, program menambahkan kata "belas" pada satuan. Untuk angka 20 ke atas, program memisahkan digit puluhan (angka / 10) dan satuan (angka % 10), lalu menggabungkan string yang sesuai, misalnya 79 → "tujuh" + " puluh " + "sembilan".

### 3. Buatlah program yang dapat memberikan input dan output sbb. (Pola Mirror)

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

##### Output 3

![Screenshot Output Unguided 3_1](https://github.com/ahmassaid/laprak1-strukturdata/blob/main/LAPRAK%20SOAL3.png)

Program ini membuat pola "Mirror" berdasarkan input n menggunakan perulangan for bersarang. Loop terluar (for i) mengatur jumlah baris. Di dalamnya terdapat dua loop bersarang: loop pertama (for j) mencetak angka dari n-i turun ke 1, lalu program mencetak karakter * sebagai pemisah. Loop kedua (for k) mencetak angka dari 1 naik ke n-i. Setelah loop baris selesai, program mencetak satu karakter * di baris paling bawah untuk melengkapi pola. Pola ini menyerupai cermin karena sisi kiri dan kanan simetris terbalik.

## Kesimpulan

Dari praktikum Modul 1 ini, dapat disimpulkan bahwa Code Blocks merupakan IDE yang mudah digunakan untuk menulis, meng-compile, dan menjalankan program C++. Bahasa C++ memiliki struktur program yang jelas, dimulai dari header file, deklarasi, hingga program utama main(). Pemahaman tentang tipe data (terutama perbedaan int dan float), operator input/output (cin dan cout), serta struktur kontrol (if-else, switch, for, while) sangat penting untuk membangun logika program yang kompleks. Hal ini dibuktikan pada ketiga soal latihan, di mana setiap soal membutuhkan kombinasi yang tepat antara deklarasi variabel, input/output, kondisional, dan perulangan agar program dapat berjalan sesuai spesifikasi yang diminta.

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>[3] Tim Asisten Struktur Data. (2024). Modul 1: Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Bandung: Universitas Telkom.
