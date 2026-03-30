#include <stdio.h>
int main () {
    char NIM [0042];
    float UTS, Praktikum, UAS, NilaiAkhir;
    
    printf("masukan NIM mahasiswa:");
    scanf("%s", NIM );
    printf("masukan nilai UTS:");
    scanf("%f", &UTS);
    printf("masukan nilai Praktikum:");
    scanf("%f", &Praktikum);
    printf("masukan nilai UAS:");
    scanf("%f", &UAS);

    NilaiAkhir=(0.3*UTS)+(0.2*Praktikum)+(0.5*UAS);

    printf("\n Laporan Nilai\n");
    printf("NIM Mahasiswa: %s\n", NIM);
    printf("Nilai Akhir: %.2f\n", NilaiAkhir);

    if (NilaiAkhir >= 60){
        printf("Keterangan: Anda Lulus\n");
    } else {
        printf("Keterangan: Anda Tidak Lulus\n");
    }
 return 0;
}