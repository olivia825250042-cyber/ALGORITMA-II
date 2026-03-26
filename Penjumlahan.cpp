#include <stdio.h>

int main() {
    int a, b, hasil;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    hasil = a + b;

    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}