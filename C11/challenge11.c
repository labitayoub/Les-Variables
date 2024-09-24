#include <stdio.h>
#include <math.h>

int main ()
{
    float largeur, longueur;
    float S,P;

    printf("Entrer la largeur du rectangle : ");
    scanf("%f",&largeur);
    printf("Entrer la longueur du rectangle : ");
    scanf("%f",&longueur);
    
    S = largeur*longueur;
    P = (largeur+longueur)*2;
    printf("Le perimetre du rectangle est : %.2f \n", P);
    printf("La surface du rectangle est : %.2f \n", S);

    return 0;

}