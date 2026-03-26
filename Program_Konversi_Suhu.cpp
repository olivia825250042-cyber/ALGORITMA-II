#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}