#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &r);
    printf("Le volume de la sphère est : %.2f\n", (4.0 / 3.0) * M_PI * pow(r, 3));
    return 0;
}