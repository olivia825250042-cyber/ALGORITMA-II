#include <stdio.h>

int main() {
    int angka, asli, balik = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    asli = angka;

    while (angka != 0) {
        sisa = angka % 10;
        balik = balik * 10 + sisa;
        angka /= 10;
    }

    if (asli == balik)
        printf("Palindrom\n");
    else
        printf("Bukan Palindrom\n");

    return 0;
}
