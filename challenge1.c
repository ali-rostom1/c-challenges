#include <stdio.h>
#include <stdlib.h>
int main(){
    char nom[10],prenom[10],email[10],sexe[10];
    int age;
    printf("saisir votre nom: ");
    scanf("%s",nom);
    printf("saisir votre prenom: ");
    scanf("%s",prenom);
    printf("saisir votre email: ");
    scanf("%s",email);
    printf("saisir votre sexe: ");
    scanf("%s",sexe);
    printf("saisir votre age: ");
    scanf("%d",&age);
    printf("nom: %s",nom);
    printf("\nprenom: %s",prenom);
    printf("\nemail: %s",email);
    printf("\nsexe: %s",sexe);
    printf("\age: %d",age);





    return 0;
}