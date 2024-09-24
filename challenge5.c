#include <stdio.h>
#include <stdlib.h>
int main(){
    float temp;
    printf("saisir la temperature:");
    scanf("%f",&temp);
    if(temp<0) printf("l'eau est solid");
    else if (temp>=100) printf("l'eau est gaz");
    else printf("l'eau est liquide");
}
