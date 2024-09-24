#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);
    printf("Moyenne geometrique = %f",pow(a * b * c, 1.0 / 3.0));
    return 0;
}