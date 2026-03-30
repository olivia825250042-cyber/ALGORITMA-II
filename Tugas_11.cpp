#include <stdio.h>
#include <string.h>

int main() {
    char barang[5][20];
    int stok[5];
    int i, menu, jumlah;

    printf("=== APLIKASI GUDANG MINI ===\n");
    for (i = 0; i < 5; i++) {
        printf("Nama barang di Rak %d: ", i + 1);
        scanf("%s", barang[i]);
        printf("Stok awal untuk %s: ", barang[i]);
        scanf("%d", &stok[i]);
        if (stok[i] < 0) stok[i] = 0;
    }

    do {
        printf("\n=== MENU PILIHAN ===\n");
        printf("1. Lihat Semua Stok\n");
        printf("2. Tambah Stok Barang\n");
        printf("3. Kurangi Stok Barang\n");
        printf("4. Tampilkan Grafik Stok\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("\n--- DATA STOK BARANG ---\n");
            for (i = 0; i < 5; i++) {
                printf("Rak %d - %-10s : %d\n", i + 1, barang[i], stok[i]);
            }

        } else if (menu == 2) {
            printf("Pilih rak (1-5): ");
            scanf("%d", &i);
            i--;
            if (i >= 0 && i < 5) {
                printf("Tambah stok untuk %s: ", barang[i]);
                scanf("%d", &jumlah);
                if (jumlah > 0) stok[i] += jumlah;
            }

        } else if (menu == 3) {
            printf("Pilih rak (1-5): ");
            scanf("%d", &i);
            i--;
            if (i >= 0 && i < 5) {
                printf("Kurangi stok untuk %s: ", barang[i]);
                scanf("%d", &jumlah);
                if (jumlah > 0) {
                    stok[i] -= jumlah;
                    if (stok[i] < 0) stok[i] = 0;
                }
            }

        } else if (menu == 4) {
            printf("\n--- HISTOGRAM STOK BARANG ---\n");
            for (i = 0; i < 5; i++) {
                printf("%-10s : ", barang[i]);
                for (int j = 0; j < stok[i]; j++) {
                    printf("#");
                }
                printf(" (%d)\n", stok[i]);
            }

        } else if (menu != 0) {
            printf("Pilihan tidak tersedia!\n");
        }

    } while (menu != 0);

    printf("\nProgram ditutup. Sampai jumpa!\n");
    printf("\nOlivia Anastasha S (825250042) SI-B\n");
    return 0;
}
