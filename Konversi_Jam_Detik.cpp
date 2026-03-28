#include <stdio.h>

int main() {
    int jam, detik;
    printf("Masukkan jam: ");
    scanf("%d", &jam);

    detik = jam * 3600;
    printf("Detik = %d", detik);

    return 0;
}