#include <stdio.h>

int main() {
    float l, L;
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &l);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &L);
    printf("La surface du rectangle est : %.2f\n", l*L);
    return 0;
}