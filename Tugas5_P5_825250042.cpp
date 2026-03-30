#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        int value = 1;

        for (int k = 0; k < n - i - 1; k++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d   ", value);

            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    printf("\nCATATAN\n");
    printf("\\Cetak segitiga Pascal dengan n baris, rata kanan\n");
    printf("\\Setiap baris mulai dengan value = 1\n");
    printf("\\spasi sebanyak n - i - 1 untuk rata kanan\n");
    printf("\\angka Pascal sebanyak i + 1 angka per baris\n");
    return 0;
}
