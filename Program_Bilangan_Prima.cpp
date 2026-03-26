#include <stdio.h>

int main() {
    int n, i, isPrima = 1;
    printf("Masukkan angka: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrima = 0;
    } else {
        for (i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isPrima = 0;
                break;
            }
        }
    }
    if (isPrima)
        printf("%d adalah bilangan prima\n", n);
    else
        printf("%d bukan bilangan prima\n", n);
    return 0;
}