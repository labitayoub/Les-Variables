#include<stdio.h>
#include<stdlib.h>

int main()
{
float C;

printf("entrer la temperature en celsius ");
scanf("%f",&C);

if (C<0)
{
printf("letat de leau est :Solide");
}
else if (C>=0 && C<100)
{
printf("letat de leau est :Liquide");
}
else if (C>=100)
{
printf("letat de leau est :Gaz");
}



return 0;
}