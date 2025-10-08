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
