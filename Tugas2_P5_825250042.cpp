#include <stdio.h>

int main() {
    int i, j, n;
    char huruf = 'A';
    n = 4;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  "); 
        }
       
        for (j = 1; j <= i; j++) {
            printf("%c ", huruf++);
        }
        printf("\n");
    }
    printf("\nCATATAN\n");
    printf("\\huruf = 'A' huruf awal yang akan dicetak\n");
    printf("\\i sama j itu variabel looping\n");
    printf("\\n=4 jumlah baris segitiga/tinggi segitiga\n");
    
    return 0;
}

