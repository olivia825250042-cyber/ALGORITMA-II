#include <iostream>
using namespace std;

int main() {
    int angka, asli, balik = 0, sisa;

    cout << "Masukkan angka: ";
    cin >> angka;

    asli = angka;

    while (angka != 0) {
        sisa = angka % 10;
        balik = balik * 10 + sisa;
        angka /= 10;
    }

    if (asli == balik)
        cout << "Palindrom";
    else
        cout << "Bukan Palindrom";

    return 0;
}