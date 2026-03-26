#include <stdio.h>

int main() {
    int panjang, lebar, luas;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);

    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    luas = panjang * lebar;

    printf("Luas persegi panjang: %d\n", luas);

    return 0;
}