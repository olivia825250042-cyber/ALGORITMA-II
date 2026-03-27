#include <stdio.h>

int main() {
    float tugas, uts, uas, akhir;

    printf("Nilai tugas: ");
    scanf("%f", &tugas);

    printf("Nilai UTS: ");
    scanf("%f", &uts);

    printf("Nilai UAS: ");
    scanf("%f", &uas);

    akhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

    printf("Nilai akhir = %.2f\n", akhir);

    if (akhir >= 80)
        printf("Grade A\n");
    else if (akhir >= 70)
        printf("Grade B\n");
    else if (akhir >= 60)
        printf("Grade C\n");
    else
        printf("Tidak lulus\n");

    return 0;
}