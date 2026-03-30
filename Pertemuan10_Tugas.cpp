#include <stdio.h>
#include <string.h>

float hitung_biaya_asuransi(char tan[30], float nilai, float luas) {
    float tarif = 0.035;

    if (strcmp(tan, "cabai") == 0 || strcmp(tan, "bawang") == 0 || strcmp(tan, "kedelai") == 0 ||
        strcmp(tan, "kentang") == 0 || strcmp(tan, "kacang") == 0) {
        tarif = tarif * 2;
    } else if (strcmp(tan, "padi") == 0 || strcmp(tan, "jagung") == 0 || strcmp(tan, "singkong") == 0) {
        tarif = tarif * 1.5;
    }

    float hasil = nilai * luas * tarif;
    return hasil;
}

void cetak_slip(char nama_petani[50], char jenis_tanaman[3][30], float biaya[3], int jml) {
    float total = 0;

    printf("\n===== SLIP PEMBAYARAN ASURANSI =====\n");
    printf("Nama Petani : %s\n", nama_petani);
    printf("------------------------------------\n");

    for (int i = 0; i < jml; i++) {
        printf("%d. Jenis tanaman : %s\n", i + 1, jenis_tanaman[i]);
        printf("   Biaya asuransi : Rp%.2f\n", biaya[i]);
        total += biaya[i];
    }

    printf("------------------------------------\n");
    printf("Total pembayaran : Rp%.2f\n", total);
    printf("====================================\n");
}

int main() {
    char nama[50];
    int jumlah_ladang;
    char jenis[3][30];
    float nilai[3];
    float luas[3];
    float biaya[3];

    printf("Masukkan nama petani: ");
    scanf("%49s", nama); 
    printf("Masukkan jumlah ladang (maks 3): ");
    scanf("%d", &jumlah_ladang);

    for (int i = 0; i < jumlah_ladang; i++) {
        printf("\nData Ladang ke-%d\n", i + 1);
        printf("Jenis tanaman: ");
        scanf("%s", jenis[i]);
        printf("Nilai tanggungan per hektar: ");
        scanf("%f", &nilai[i]);
        printf("Luas tanah (hektar): ");
        scanf("%f", &luas[i]);

        biaya[i] = hitung_biaya_asuransi(jenis[i], nilai[i], luas[i]);
    }

    cetak_slip(nama, jenis, biaya, jumlah_ladang);

    printf("\nTekan enter untuk keluar...");
    getchar(); getchar();

    return 0;
}
