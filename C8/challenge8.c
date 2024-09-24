#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
moyenne  = cbrt(a * b * c);

printf("Le moyenne geometrique est :%.2f",moyenne);




return 0;
}