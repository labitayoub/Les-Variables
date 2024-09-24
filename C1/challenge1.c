#include<stdio.h>
#include<stdlib.h>

int main()
{
char nom[10],prenom[10],sexe[10],adresse[50];
int age;
printf("saisir votre prenom :");
scanf("%s",&nom);
printf("saisir votre prenom :");
scanf("%s",&prenom);
printf("saisir votre age :");
scanf("%d",&age);
printf("saisir votre sexe :");
scanf("%s",&sexe);
printf("saisir votre adresse email :");
scanf("%s",&adresse);


printf("votre nom est :%s\n",nom);
printf("votre prenom est :%s\n",prenom);
printf("votre age est :%d\n",age);
printf("votre sexe est :%s\n",sexe);
printf("votre adresse est :%s\n",adresse);

return 0;
}