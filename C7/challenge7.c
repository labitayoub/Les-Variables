#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b,c;
float moyenne;

printf("Entrer le premiere nombre ");
scanf("%f",&a);
printf("Entrer le deuxieme nombre ");
scanf("%f",&b);
printf("Entrer le troixieme nombre ");
scanf("%f",&c);
moyenne =((a*2)+(b*3)+(c*5))/10;

printf("Le moyenne ponderee est :%.2f",moyenne);




return 0;
}