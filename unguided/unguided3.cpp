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
