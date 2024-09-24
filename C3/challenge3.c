#include<stdio.h>
#include<stdlib.h>

int main()
{
float Yards,Km;

printf("Entrer la distance en kilomètres ");
scanf("%f",&Km);

Yards = Km * 1093.61;

printf("La distance en yards est :%f",Yards);




return 0;
}