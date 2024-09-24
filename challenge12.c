#include <stdio.h>

int main() {
    int nb, digit4, digit3, digit2, digit1, inverse;
    printf("Entrez un nombre entier a quatre chiffres : ");
    scanf("%d", &nb);
    digit4 = nb / 1000;
    digit3 = (nb / 100) % 10;
    digit2 = (nb / 10) % 10;
    digit1 = nb % 10;
    inverse = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    printf("L'inverse du nombre est : %d\n", inverse);
    return 0;
}