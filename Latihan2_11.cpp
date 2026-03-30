#include <stdio.h>

int main() {
    int i;
    float rata, max, min;
    float suhu[7];
    float sum = 0;

    printf("===Program Pencatatan Suhu Harian===\n");
    printf("Masukkan suhu selama 7 hari:\n");
    for (i = 0; i < 7; i++) {
        printf("Masukan Suhu Hari ke-%d: ", i+1);
        scanf("%f", &suhu[i]);
        sum += suhu[i];
    }

    rata = sum / 7;
    max = min = suhu[0];

    for (i = 1; i < 7; i++) {
        if (suhu[i] < min){
            min = suhu[i];
        } 
        if (suhu[i] > max){
            max = suhu[i];
        }
    }

    printf("\nSuhu rata-rata: %.2f derajat\n", rata);
    printf("Suhu tertinggi: %.2f derajat\n", max);
    printf("Suhu terendah : %.2f derajat\n", min);

    return 0;
}