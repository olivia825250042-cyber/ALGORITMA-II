#include <stdio.h>

int main() {
    float a, b, t, luas;

    printf("Masukkan sisi atas: ");
    scanf("%f", &a);
    printf("Masukkan sisi bawah: ");
    scanf("%f", &b);
    printf("Masukkan tinggi: ");
    scanf("%f", &t);

    luas = 0.5 * (a + b) * t;

    printf("Luas trapesium = %.2f", luas);

    return 0;
}