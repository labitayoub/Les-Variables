  #include<stdio.h>
  #include<stdlib.h>
  
  int main ()
  {
  
  int tab[10], nbr, i;  
  
  printf("Entrez le nombre a convertir :");  
  scanf("%d",&nbr);  
   printf("le nombre en hexadecimal est : %X \n",nbr);
  for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;  
  } 
 
  printf("\nLe nombre binaire est : ");
  
  for(i=i-1; i >= 0; i--)  
  {  
    printf("%d",tab[i]);  
  }  
  
  
  return 0;
  }