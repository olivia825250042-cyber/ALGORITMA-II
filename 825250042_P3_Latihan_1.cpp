#include <stdio.h>
int main() {
    int Lama_studi;

    printf("masukkan lama studi(tahun):");
    scanf("%d", &Lama_studi);

    if(Lama_studi<= 4){
        printf("lulus tepat waktu\n");    
    } else {
        printf("lulus tidak tepat waktu\n");
    }
    return 0;
}