#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0)); // Seed random
    secret = rand() % 10 + 1; // Angka 1-10

    printf("Game Tebak Angka (1-10)\n");

    do {
        printf("Tebak angka: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == 99) {
            printf("Kamu keluar dari permainan.\n");
            break;
        }

        if (guess < secret) {
            printf("Terlalu kecil\n");
        } else if (guess > secret) {
            printf("Terlalu besar\n");
        } else {
            printf("Benar! Angkanya adalah %d\n", secret);
            printf("Jumlah percobaan: %d\n", attempts);
        }

    } while (guess != secret);

    printf("Program Berhenti\n");

    return 0;
}
