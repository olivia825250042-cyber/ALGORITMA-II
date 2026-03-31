#include <stdio.h>
int main () {
int n,p1,p2;

printf ("Masukkan nilai n: ");
scanf ("%d",&n);
printf ("Masukkan p1 : ");
scanf ("%d%%",&p1);
printf ("Masukkan p2 : ");
scanf ("%d%%",&p2);

int seminggu = p1*n/100;
int rasa_lemon = p2*n/100;
int rasa_jeruk = (100-p2)*n/100;

printf ("Hasil persen membeli sekurangnya satukali seminggu %d\n",seminggu);
printf ("Hasil orang menyukai rasa lemon %d\n",rasa_lemon);
printf ("Hasil orang menyukai rasa jeruk %d\n",rasa_jeruk);
    return 0;
}