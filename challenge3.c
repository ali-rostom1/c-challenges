#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float dist;
    printf("saisir la distance en kilometre: ");
    scanf("%f",&dist);
    printf("la distance en yards est: %.2f yards",dist * 1093.61);

    return 0;
}