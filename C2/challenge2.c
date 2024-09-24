#include<stdio.h>
#include<stdlib.h>

int main()
{
float C,K;

printf("Entrer la température en Celsius ");
scanf("%f",&C);

K= C+273.15;
printf("La température en Kelvin est :%f",K);




return 0;
}