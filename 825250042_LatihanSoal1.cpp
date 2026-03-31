#include <stdio.h>
#include <math.h>

int main () {
    float E = 3.5;
    float l = 1.0;
    float R = 17.3;
    float C = 5.0;
    float f = 0.05;
    float L = 0.01;
    float phi = 3.14;

    float alpha;

    alpha = E * 1 * cos(45*phi/180) / sqrt(pow(R,2)+ pow((2*phi * f * 1-1/2 * phi * f * C),2));

    printf("Hasil dari alpha adalah: %.2f", alpha);
    
    return 0;
}