#include <stdio.h>
#include <stdlib.h>

   int main() {
    float nombre1, nombre2, nombre3;
    float poids1 = 2, poids2 = 3, poids3 =5;
    float sommep, moyennep;
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nombre2);
    printf("Entrez le troisième nombre : ");
    scanf("%f", &nombre3);
    sommep = poids1 + poids2 + poids3;
    moyennep = (nombre1 * poids1 + nombre2 * poids2 + nombre3 * poids3) / sommep;
    printf("La moyenne pondere est : %.2f\n", moyennep);

    return 0;
}