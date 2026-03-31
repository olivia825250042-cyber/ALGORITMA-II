#include <stdio.h>

int main() {
int luasladang, biayatanggung;
printf ("Masukan luas ladang:");
scanf ("%d",&luasladang);
printf ("Masukan biaya tanggung Rp");
scanf ("%d",&biayatanggung);

float biaya_asuransi = 0.035 * (float) luasladang * (float) biayatanggung;  
printf ("Biaya asuransi Rp %.2f\n ",biaya_asuransi);

return 0;
}