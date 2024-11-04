#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,delta,x1,x2;
    printf("donner a");
    scanf("%f",&a);
    printf("donner b");
    scanf("%f",&b);
    printf("donner c ");
    scanf("%f",&c);
    delta =b * b -(4*a*c);
    if(delta < 0)
    {
        printf(" pas de solution ");
    }
    else if (delta > 0 )
    {
        x1 = -b - sqrt(delta)/ (2 * a);
        x2= -b + sqrt(delta)/ (2 * a);
        printf("les solutions sont %f %f",x1,x2);
    }
    else if  (delta == 0)
    {
        x1= -b /(2*a);
        printf("la solution unique est %f",x1);
    }
}