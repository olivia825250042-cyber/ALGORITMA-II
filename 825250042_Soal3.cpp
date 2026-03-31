#include <iostream>
using namespace std;

int main() {
    float harga, diskon, total;
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan diskon (%): ";
    cin >> diskon;

    total = harga - (harga * diskon / 100);
    cout << "Total yang harus dibayar: " << total << endl;
 return 0;
}