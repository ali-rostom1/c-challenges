#include <stdio.h>

int main() {
    int nb;

    printf("Entrez un nombre entier entre 1 et 10 : ");
    scanf("%d", &nb);

    if (nb < 1 || nb > 10) {
        printf("Erreur : le nombre doit etre entre 1 et 10.\n");
        return 1;
    }

    printf("Valeur en hexadecimal : %X\n", nb);

    const char *binaryRepresentations[11] = {"0", "1", "10", "11", "100", "101", "110", "111", "1000", "1001", "1010"};

    printf("Valeur en binaire : %s\n", binaryRepresentations[nb]);

    return 0;
}