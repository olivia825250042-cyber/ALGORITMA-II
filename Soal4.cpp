#include <stdio.h>

int main() {
    int n;
    char c1, c2;

    printf("Tentukan Ukuran Matrix: ");
    scanf("%d", &n);

    printf("\nTentukan karakter baris ganjil: ");
    scanf(" %c", &c1);  // Tambah spasi sebelum %c

    printf("\nTentukan karakter baris genap: ");
    scanf(" %c", &c2);  // Tambah spasi sebelum %c

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                printf("%c", c1);  // Baris ganjil (index 0, 2, 4, ...)
            } else {
                printf("%c", c2);  // Baris genap (index 1, 3, 5, ...)
            }
        }
        printf("\n");
    }

    return 0;
}
