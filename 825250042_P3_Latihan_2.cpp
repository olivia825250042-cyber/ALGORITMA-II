#include <stdio.h>
int main() {
    int Lama_studi;

    printf("Masukkan lama studi(tahun):");
    scanf("%d", &Lama_studi);

    if(Lama_studi<= 4){
        printf(" anda mengerjakan tepat waktu\n");    
    } else {
        printf("anda mengerjakan tidak tepat waktu\n");
    }
    
    return 0;
}