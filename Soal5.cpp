#include <stdio.h>

int main() {
    // Daftar produk
    char *namaProduk[5] = {
        "Aqua Botol",
        "Snack Coklat",
        "Roti Isi",
        "Kopi Kaleng",
        "Teh Botol"
    };
    int hargaProduk[5] = {15000, 20000, 18000, 22000, 25000};

    // Keranjang
    int totalHarga = 0;
    int jumlah = 0;
    int pilihan;

    printf("=== VENDING MACHINE SEDERHANA ===\n");

    while (jumlah < 3 && totalHarga < 50000) {
        // Tampilkan daftar produk
        printf("\nDaftar Produk:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d. %s - Rp%d\n", i + 1, namaProduk[i], hargaProduk[i]);
        }
        printf("6. Selesai / Bayar\n");

        printf("Pilih produk (1-6): ");
        scanf("%d", &pilihan);

        if (pilihan == 6) {
            break;
        }

        if (pilihan >= 1 && pilihan <= 5) {
            if (totalHarga + hargaProduk[pilihan - 1] > 50000) {
                printf("Total melebihi Rp50000, tidak bisa tambah produk.\n");
                break;
            }

            totalHarga += hargaProduk[pilihan - 1];
            jumlah++;

            printf("Anda memilih: %s (Rp%d)\n", namaProduk[pilihan - 1], hargaProduk[pilihan - 1]);
        } else {
            printf("Pilihan tidak valid!\n");
        }
    }

    // Ringkasan
    printf("\n=== TOTAL PEMBELIAN ===\n");
    printf("Jumlah item : %d\n", jumlah);
    printf("Total harga : Rp%d\n", totalHarga);
    printf("Terima kasih!\n");

    return 0;
}
