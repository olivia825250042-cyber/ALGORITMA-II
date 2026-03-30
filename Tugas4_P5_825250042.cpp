#include <stdio.h>

int main() {
    int i, j;
    int kiri = 7, kanan = 10;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("%d %d\n", kiri, kanan);

        if (i == 5) { kiri += 8; kanan += 8; }
        else if (i == 4) { kiri += 12; kanan += 6; }
        else if (i == 3) { kiri += 15; kanan += 4; }
        else if (i == 2) { kiri += 17; kanan += 2; }
    }
    printf("\nCATATAN\n");
    printf("Bintang berkurang satu tiap baris\n");
    printf("Angka kiri bertambah dengan kenaikan yang semakin besar \n");
    printf("Angka kanan bertambah dengan kenaikan yang semakin kecil \n");
    return 0;
}