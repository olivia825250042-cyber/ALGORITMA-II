#include <stdio.h>

int main() {
    int angka[10];
    int i;

    printf("===Program Pemisah Bilangan Ganjil dan Genap===\n");
    printf("Masukkan 10 bilangan integer:\n");
    for (i = 0; i < 10; i++) {
        printf("Angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
    }

    printf("\nBilangan genap: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            printf("%d ", angka[i]);
        }
    }

    printf("\nBilangan ganjil: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 2 != 0) {
            printf("%d ", angka[i]);
        }
    }
    return 0;
}