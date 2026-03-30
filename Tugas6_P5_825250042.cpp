#include <stdio.h>

int main() {
    int baris = 4, kolom = 5;
    int i, j, start = 1;

    for (i = 0; i < baris; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < kolom; j++) {
                printf("%2d ", start++);
            }
        } else {
        
            start += kolom - 1;
            for (j = 0; j < kolom; j++) {
                printf("%2d ", start--);
            }
            start += kolom + 1;
        }
        printf("\n");
    }

    return 0;
}