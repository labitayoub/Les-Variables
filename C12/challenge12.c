#include <stdio.h>
#include <math.h>

int main ()
{

   int mille,cent,dix,unite,nbr;
   int NbrInverse;
 
   printf("Entrez un nombre a inverser\n");
   scanf("%d",&nbr);
 
   
   
      mille =(nbr/1000)%10;
      cent =(nbr/100)%10;
      dix = (nbr/10)%10;
      unite =nbr%10;
   
 

   printf("Le nombre en sens inverse est = %d%d%d%d\n",unite,dix,cent,mille);
 
   return 0;
}