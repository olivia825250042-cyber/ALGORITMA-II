#include <stdio.h>

int main() {
    float p, l, t, volume, luas;
    printf("Masukkan panjang: ");
    scanf("%f", &p);
    printf("Masukkan lebar: ");
    scanf("%f", &l);
    printf("Masukkan tinggi: ");
    scanf("%f", &t);

    // Hitung volume dan luas permukaan
    volume = p * l * t;
    luas = 2 * (p*l + p*t + l*t);
    printf("Volume Balok = %.2f\n", volume);
    printf("Luas Permukaan Balok = %.2f\n", luas);
    return 0;
}
