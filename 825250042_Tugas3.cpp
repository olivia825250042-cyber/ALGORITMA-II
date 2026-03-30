#include <stdio.h>
#include <string.h>

int main (){
    int SKS, Semester, SKPI;
    float IPK;
    char LulusSkripsi[10], MemilikiTulisanIlmiah[10], MemilikiSertifikasi[10];
    int lulus = 1;

    printf("Program Penentuan Kelulusan Mahasiawa UNTAR\n");

    printf("Masukkan jumlah SKS: ");
    scanf("%d", &SKS);

    printf("Masukan IPK: ");
    scanf("%f", &IPK);

    printf("Masukan lama masa studi(semester): ");
    scanf("%d", &Semester);

    printf("Apakah sudah lulus skripsi?(sudah/belum): ");
    scanf("%s", &LulusSkripsi);

    printf("Apakah sudah memiliki tulisan ilmiah?(sudah/belum): ");
    scanf("%s", &MemilikiTulisanIlmiah);

    printf("Masukan jumlah poin SKPI: ");
    scanf("%d", &SKPI);

    printf("apakah sudah memiliki sertifikasi?(sudah/belum): ");
    scanf("%s", &MemilikiSertifikasi);

    printf("\n Hasil Penilaian \n");

    if(SKS < 144){
        printf("SKS tidak mencakupi (minimal 144)\n");
        lulus = 0;
     }
     if(IPK < 2.4){
        printf("IPK tidak mencakupi (minimal 2.4)\n");
        lulus = 0;
     }
     if(Semester > 16){
        printf("lama studi melebihi batas maksimal (16 Semester)\n");
        lulus = 0;
     }
     if(strcmp(LulusSkripsi,"sudah") != 0){
        printf("Belum Lulus Skripsi\n");
        lulus = 0;
     }
     if(strcmp(MemilikiTulisanIlmiah,"sudah") != 0){
        printf("Belum memiliki tulisan ilmiah\n");
        lulus = 0;
     }
     if(SKPI < 150){
        printf("Poin SKPI tidak mencakupi (minimal 150)\n");
        lulus = 0;
     }
     if(strcmp(MemilikiSertifikasi, "sudah") != 0){
        printf("Belum memiliki sertifikasi\n");
        lulus = 0;
     }
    if(lulus){
        printf("\n SELAMAT! Kamu dinyatakan LULUS.\n");
    } else {
        printf("\n MAAF, kamu dinyatakan TIDAK LULUS\n");
    }
    return 0;
}