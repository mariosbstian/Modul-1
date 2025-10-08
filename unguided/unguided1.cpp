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