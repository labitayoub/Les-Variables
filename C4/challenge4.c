#include<stdio.h>
#include<stdlib.h>

int main()
{
float km,m;

printf("Entrer la vitesse en kilometres par heure (km/h) ");
scanf("%f",&km);

m = km * 0.27778;

printf("Entrer la vitesse en metres par heure (m/h) :%f",m);




return 0;
}