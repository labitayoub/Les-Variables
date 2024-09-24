#include <stdio.h>
#include <math.h>

int main ()
{
    float V, R;
    const float Pi = 3.14;
    
    printf("Entrer le rayon du sphere : ");
    scanf("%f",&R);
    
    V =  (4/ 3)* Pi * pow(R,3);

    printf("Le volume du sphere est : %.2f \n", V);

    return 0;
}