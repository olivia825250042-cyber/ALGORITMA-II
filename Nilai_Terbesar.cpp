#include <stdio.h>

int main() {
    int a, b, c;
    printf("Masukkan 3 angka: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Terbesar: %d", a);
    else if (b >= c)
        printf("Terbesar: %d", b);
    else
        printf("Terbesar: %d", c);

    return 0;
}