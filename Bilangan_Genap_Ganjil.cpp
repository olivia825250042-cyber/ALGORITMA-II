#include <stdio.h>

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka % 2 == 0)
        printf("Genap");
    else
        printf("Ganjil");

    return 0;
}
