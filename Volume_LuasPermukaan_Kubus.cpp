#include <stdio.h>

int main() {
    float s, volume, luas;
    
    printf("Masukkan sisi: ");
    scanf("%f", &s);

    // Hitung volume dan luas permukaan
    volume = s * s * s;
    luas = 6 * s * s;
    printf("Volume Kubus = %.2f\n", volume);
    printf("Luas Permukaan Kubus = %.2f\n", luas);
    return 0;
}