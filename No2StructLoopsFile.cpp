#include <stdio.h>
#include <string.h>

struct Item {
    char nama[50];
    int jumlah;
};

int main() {
    struct Item data;
    FILE *fp;
    int pilihan;

    do {
        printf("\n=== MENU SHOPPING LIST ===\n");
        printf("1. Tambahkan item\n");
        printf("2. Tampilkan isi shopping list\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            fp = fopen("ShoppingList.txt", "a");

            printf("Nama item: ");
            scanf("%s", data.nama);
            printf("Jumlah: ");
            scanf("%d", &data.jumlah);

            fprintf(fp, "%s %d\n", data.nama, data.jumlah);
            fclose(fp);

            printf("Item ditambahkan.\n");
        }

        else if (pilihan == 2) {
            fp = fopen("ShoppingList.txt", "r");

            if (fp == NULL) {
                printf("Shopping list masih kosong.\n");
            } else {
                printf("\n=== Isi Shopping List ===\n");
                while (fscanf(fp, "%s %d", data.nama, &data.jumlah) != EOF) {
                    printf("- %s : %d\n", data.nama, data.jumlah);
                }
                fclose(fp);
            }
        }

    } while (pilihan != 3);

    return 0;
}