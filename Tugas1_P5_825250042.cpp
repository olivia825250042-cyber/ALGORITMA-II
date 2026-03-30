#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c, i;
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);

    printf("%d %d", a, b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }

    printf("\nCATATAN\n");
    printf("//Fibonacci itu nama untuk deret bilangan unik di mana setiap angka adalah hasil penjumlahan dua bilangan sebelumnya\n");
    printf("//Fibonacci biasanya bilangan awalnya itu 0,1,1\n");
    printf("//Polanya 1+1=2, 1+2=3, 2+3=5 dst...\n");
    printf("//a itu bilngan pertama, b itu bilangan kedua, i bilangan ketiga\n");
    printf("//karena a sama b itu tetap(ketentuan fibonacci)\n");
    printf ("//loop dimulai dari i=3(bilangan ke-3)\n");
    printf ("//karena dua bilangan pertama udah di cetak(a dan b)\n");
    printf("==Izin buat catatan di compiler==\n");
    
printf("=izin bertanya kak buat mastiin=\n");
 printf ("a sama b itu awal mula rumus ya? ketentuan agar for jalan?\n");

    return 0;
}