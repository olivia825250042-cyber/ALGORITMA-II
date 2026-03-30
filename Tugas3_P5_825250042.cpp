#include <stdio.h>

int main() {
    int i, j;
    int n = 5;
    
    for (i = 0; i <= n/2; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < n - 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = n/2 - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < n - 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\nCATATAN\n");
    printf("\\Baris atas: i = 0 sampai n/2\n");
    printf("\\Baris bawah: i = n/2 - 1 sampai 0\n");
    return 0;
}
