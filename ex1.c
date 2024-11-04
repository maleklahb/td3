#include <stdio.h>
void main()
{
    int n;
    printf("donnez un entier n ");
    scanf("%d",&n);
    if  (n % 5 == 0)
    {
        printf("%d divisible par 5",n);
    }
    else if (n % 6 == 0)
    {
         printf("%d divisible par 6",n);
    }
    else if (n  % 6 == 0 && n % 5 == 0)
    {
        printf("%d est divisible par 5 et 6",n);
    }
}