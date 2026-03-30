#include <stdio.h>

int main() {
    int arr[5];
    int i, nilaiTertinggi;

    printf("Masukkan 5 angka:\n");
    for (i = 0; i < 5; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nAngka yang kamu input:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    nilaiTertinggi = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
        }
    }

    printf("Nilai paling besar: %d\n", nilaiTertinggi);

    FILE *fp;
    int nilaiDalamFile;

    fp = fopen("MaxValue.txt", "r");

    if (fp == NULL) {
        printf("File MaxValue.txt belum ada, membuat file baru...\n");
        fp = fopen("MaxValue.txt", "w");
        fprintf(fp, "%d", nilaiTertinggi);
        fclose(fp);
        printf("Nilai %d disimpan sebagai nilai awal.\n", nilaiTertinggi);
        return 0;
    }

    fscanf(fp, "%d", &nilaiDalamFile);
    fclose(fp);

    printf("Nilai yang tersimpan di file: %d\n", nilaiDalamFile);

    if (nilaiTertinggi > nilaiDalamFile) {
        fp = fopen("MaxValue.txt", "w");
        fprintf(fp, "%d", nilaiTertinggi);
        fclose(fp);

        printf("Nilai baru lebih besar, file sudah diperbarui.\n");
    } else {
        printf("Nilai baru tidak lebih tinggi. File tetap.\n");
    }

    return 0;
}