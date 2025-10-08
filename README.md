# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (1)</h1>
<p align="center">Mario Sebastian Barus</p>

## Dasar Teori
Bahasa C++ merupakan salah satu bahasa tingkat tinggi yang banyak digunakan karena memiliki struktur yang sistematis dan efisien. Setiap program yang ada dibuat untuk menggambarkan konsep dasar dari pemrograman terstruktur seperti penggunaan variabel, operator, percabangan, dan perulangan. Program Hello World berfungsi sebagai langkah awal untuk memahami struktur utama program, yang terdiri dari fungsi main, iostream, serta penggunaan namespace std agar penulisan kode menjadi lebih sederhana dan mudah untuk kita pahami. Penerapan operator aritmatika dan logika menunjukkan bagaimana komputer melakukan perhitungan dan perbandingan nilai untuk mengambil keputusan secara otomatis. Struktur percabangan if else membantu program menentukan tindakan yang harus dijalankan berdasarkan kondisi tertentu, sementara struktur perulangan seperti while, do while, dan for untuk kita memungkinkan eksekusi instruksi berulang dengan cara yang efisien. Program aritmatika dengan tipe data float menampilkan penggunaan angka desimal untuk hasil yang lebih presisi, sedangkan program konversi angka menjadi terbilang memperlihatkan bagaimana fungsi, logika bercabang, dan array string digunakan untuk mengubah angka menjadi bentuk teks. Secara keseluruhan, kode-kode tersebut menunjukkan bagaimana prinsip pemrograman terstruktur bekerja dalam mengatur alur logika, memproses data dengan efisien, dan membuat komputer mampu menjalankan instruksi secara sistematis menggunakan bahasa C++.

## Guided 

### 1. [HelloWorld]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World" << endl;
    return 0;
}

```
Kode di atas digunakan untuk menampilkan teks “Hello, World” ke layar sebagai output menggunakan bahasa C++.
### 2. [InputOutput]

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    const float pi = 3.14;

    cout << "Masukan angka: ";
    cin >> n ;

    cout << "Angka dikeluarkan: " << n << endl;
    cout << "Nilai konstanta pi: " << pi << endl;

    return 0;

}
```
Kode di atas digunakan untuk menerima input angka dari pengguna dan menampilkan kembali nilai yang dimasukkan serta menampilkan nilai konstanta pi dalam bahasa C++.
### 3. [Operator]

```C++
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Masukan angka1: ";
    cin >> a;
    cout << "Masukan angka2: ";
    cin >> b;

    //operator aritmatika
    cout << "a + b = " << (a+b) << endl;
    cout << "a - b = " << (a-b) << endl;
    cout << "a * b = " << (a*b) << endl;
    cout << "a / b = " << (a/b) << endl;
    cout << "a % b = " << (a%b) << endl;

    //operator logika
    cout << "a > b = " << (a>b) << endl;
    cout << "a < b = " << (a<b) << endl;
    cout << "a >= b = " << (a>=b) << endl;
    cout << "a <= b = " << (a<=b) << endl;
    cout << "a == b = " << (a==b) << endl;
    cout << "a != b = " << (a!=b) << endl;

    return 0;
}
```
Kode di atas digunakan untuk melakukan operasi aritmatika dan logika antara dua bilangan yang dimasukkan oleh pengguna serta menampilkan hasil dari masing-masing operasi tersebut.
### 4. [Percabangan]

```C++
#include <iostream>
using namespace std;

int main() {
    int angka1 = 10;
    int angka2 = 20;

    if (angka1 > angka2) {
        cout << "Angka1 lebih besar dari Angka2" << endl;
    } else if (angka1 < angka2) {
        cout << "Angka1 lebih kecil dari Angka2" << endl;
    } else {
        cout << "Angka1 sama dengan Angka2" << endl;
    }

    return 0;
}

```
Kode di atas digunakan untuk membandingkan dua nilai dan menampilkan hasil perbandingan apakah nilai pertama lebih besar, lebih kecil, atau sama dengan nilai kedua.
### 5. [PerulanganDoWhile]

```C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 20;

    while (i <= 10) {
        cout << i << "-";
        i++;
    }

    cout << endl;

    do { // Mengecek, kalo bener yaudah stop, kalo salah ya lanjut di cek lagi
        cout << j << "-";
        j++;
    } while (j <= 10);
}
```
Kode di atas digunakan untuk memperlihatkan perbedaan cara kerja antara perulangan while dan do-while, di mana while hanya menjalankan perulangan jika kondisi awal terpenuhi, sedangkan do-while tetap menjalankan satu kali perintah terlebih dahulu sebelum memeriksa kondisi.
### 6. [PerulanganFor]

```C++
#include <iostream>
using namespace std;

int main() {
    int i;
    int j;

    for (int i = 0; i <= 10; i++) {
        cout << i << "-" ;
    }

    cout << endl;

    for (int j = 20; j >= 10; j--) {
        cout << j << "-";
    }

    return 0;

}

```
Kode di atas digunakan untuk menampilkan urutan angka naik dari 0 sampai 10, lalu menampilkan urutan angka turun dari 20 sampai 10 dengan menggunakan dua perulangan for.

## Unguided 

### 1. [Unguided 1]

```C++
#include <iostream>

using namespace std;

int main() {
    float a, b;
    
    cout << "Masukkan bilangan pertama : ";
    cin >> a;

    cout << "Masukkan bilangan kedua : ";
    cin >> b;

    cout << "\n--- Hasil Hitungan ---\n";
    cout << "Jumlah: " << a + b << endl;
    cout << "Kurang: " << a - b << endl;
    cout << "Kali  : " << a * b << endl;
    
    cout << "Bagi  : " << a / b << endl; 

    return 0;
}

```
#### Output:
<img width="1054" height="273" alt="image" src="https://github.com/user-attachments/assets/da2ed84a-a03c-4525-9fc4-86d5d2d65f7c" />

Kode di atas digunakan untuk meminta dua angka dari pengguna, lalu menghitung dan menampilkan hasil penjumlahan, pengurangan, perkalian, serta pembagian dari kedua angka tersebut.
#### Full code Screenshot:
<img width="600" height="448" alt="image" src="https://github.com/user-attachments/assets/de8ab92b-478d-4305-a8ef-7b3fe12ce7a5" />

### 2. [Unguided 2]

```C++
#include <iostream>

using namespace std;

string ubahSatuan(int n) {
    string kata[] = {"", "satu", "dua", "tiga", "empat", "lima",
                     "enam", "tujuh", "delapan", "sembilan"};
    return kata[n];
}

string ubahTerbilang(int n) {
    if (n == 0) return "nol";
    if (n == 100) return "seratus";

    if (n < 10) {
        return ubahSatuan(n);
    } else if (n < 20) {
        if (n == 10) return "sepuluh";
        if (n == 11) return "sebelas";
        return ubahSatuan(n % 10) + " belas";
    } else {
        int puluhan = n / 10;
        int satuan = n % 10;
        string hasil = ubahSatuan(puluhan) + " puluh";
        if (satuan != 0) hasil += " " + ubahSatuan(satuan);
        return hasil;
    }
}

int main() {
    int angka;

    cout << "Masukkan angka 0-100: ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Input diluar batas (Failed)!" << endl;
    } else {
        cout << angka << " dibaca: " << ubahTerbilang(angka) << endl;
    }

    return 0;
}
  
```
#### Output:
<img width="841" height="196" alt="image" src="https://github.com/user-attachments/assets/1b2cc550-98b3-42d1-87cc-71b22738105c" />

Kode di atas digunakan untuk mengubah angka antara 0 hingga 100 menjadi bentuk kata . Program ini meminta pengguna memasukkan sebuah angka, kemudian menampilkan hasil pembacaan angka tersebut dalam bentuk teks, seperti misalnya angka 25 menjadi dua puluh lima, namun jikalau lebih dari 100 inputnya maka hasilnya akan failed!.
#### Full code Screenshot:
<img width="969" height="728" alt="image" src="https://github.com/user-attachments/assets/2077b22f-9f9b-4aa8-9e06-5818a0883f53" />

### 3. [Unguided 3]

```C++
#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Hasil:" << endl;

    for (int i = angka; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "*" << endl;

    return 0;
}

```
#### Output:
<img width="673" height="337" alt="image" src="https://github.com/user-attachments/assets/06c00057-fe1a-4e24-b97c-e63e95889fc9" />

Kode di atas digunakan untuk menampilkan pola angka yang membentuk tampilan simetris dengan tanda bintang di tengahnya. Program meminta pengguna memasukkan sebuah angka, lalu menampilkan deretan angka yang menurun dari angka tersebut hingga 1, kemudian naik kembali dari 1 hingga angka itu sendiri. Pola ini berulang hingga membentuk tampilan seperti segitiga terbalik dengan simbol bintang sebagai pemisah di setiap baris.
#### Full code Screenshot:
<img width="455" height="472" alt="image" src="https://github.com/user-attachments/assets/db4db210-5c19-4191-9747-460ce2044867" />


## Kesimpulan
Secara keseluruhan, rangkaian program yang dibuat menggambarkan penerapan konsep dasar pemrograman terstruktur secara nyata. Program Hello World menjadi titik awal untuk memahami bentuk dasar program, sementara penggunaan variabel, konstanta, serta operator aritmatika dan logika menunjukkan cara komputer melakukan perhitungan dan pengambilan keputusan. Struktur kontrol seperti if-else, while, do-while, dan for menunjukkan bagaimana alur program dapat diatur dengan logika kondisi dan perulangan. Program konversi angka menjadi terbilang memperlihatkan penerapan fungsi, array, serta logika bercabang dalam mengubah data numerik menjadi bentuk teks. Sementara itu, program pola angka mencerminkan penerapan konsep perulangan dan manipulasi tampilan data. Secara keseluruhan, semua kode tersebut menegaskan pentingnya logika, efisiensi, dan keteraturan dalam membangun algoritma serta menyusun program yang sistematis dan mudah dipahami.
## Referensi
[1] Deitel, P. J., & Deitel, H. M. (2016). C++ How to Program (10th ed.). Pearson Education.
[2] Malik, D. S. (2018). C++ Programming: From Problem Analysis to Program Design (8th ed.). Cengage Learning.
[3] Stroustrup, B. (2013). The C++ Programming Language (4th ed.). Addison-Wesley.
[4] Sebesta, R. W. (2019). Concepts of Programming Languages (12th ed.). Pearson.
[5] Pressman, R. S., & Maxim, B. R. (2020). Software Engineering: A Practitioner’s Approach (9th ed.). McGraw-Hill Education.
[6] Wirth, N. (1976). Algorithms + Data Structures = Programs. Prentice Hall.
