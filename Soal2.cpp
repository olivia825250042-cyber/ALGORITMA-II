#include <stdio.h>

int main() {
    int pin_benar = 1234;
    int pin_input;
    int kesempatan = 3;

    do {
        printf("Masukan PIN ATM: ");
        scanf("%d", &pin_input);

        if (pin_input == pin_benar) {
            printf("PIN benar\n");
            break;
        } else {
            kesempatan--;
            printf("PIN salah. Kesempatan tersisa: %d\n", kesempatan);
        }

    } while (kesempatan > 0);

    if (kesempatan == 0) {
        printf("Kartu anda diblokir\n");
    }

    return 0;
}
