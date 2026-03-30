#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () { 
    int secret, guess, iattempt = 0;

    srand(time(0)); 
    secret = rand() % 10 + 1; // Angka 1-10

    printf("Game Tebak Angka (1-10)\n");

    do {
        printf("Tebak angka: ");
        scanf("%d", &guess);
        iattempt++;
    
        if (guess < secret){
            printf("Terlalu kecil\n");
        } else if (guess > secret)
        {
            printf("Terlalu besar\n");
        } 
        else {
            printf("Tebakan anda benar \n");
        }     
    }
    while (guess != secret);
         printf("Tebakan anda benar dalam %d percobaan. \n", iattempt);

    return 0;
}