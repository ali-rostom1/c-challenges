#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);
    printf("Le volume de la sphere est : %.2f\n", (4.0 / 3.0) * M_PI * pow(r, 3));
    return 0;
}
