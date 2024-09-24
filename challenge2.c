#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float temp;
    printf("saisir la temperature en celsius: ");
    scanf("%f",&temp);
    printf("la temperature en kelvin est: %.2f",temp+273.15);




    return 0;
}