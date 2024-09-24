#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float vitesse;
    printf("saisir la vitesse en m/s: ");
    scanf("%f",&vitesse);
    printf("la distance en yards est: %.5f yards",vitesse * 0.27778);

    return 0;
}