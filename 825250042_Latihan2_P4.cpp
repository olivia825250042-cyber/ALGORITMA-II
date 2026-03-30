#include <stdio.h>
#include <windows.h>

int main(){
    int count;

    printf("masukkan angka untuk countdown: ");
    scanf("%d", &count);

    printf("countdown dimulai:\n");
    while (count >=0){
        printf("%d\n", count);
        Sleep(1000);
        count--;
    }
    
    printf("waktu habis!\n");
    return 0;

}