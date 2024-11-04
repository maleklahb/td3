#include <stdio.h>
void main()
{
    int n,m,c,d,u;
    printf("donnez un entier ");
    scanf("%d",&n);
    m=n/1000;
    c=(n%1000)/100;
    d=((n%1000)%100)/10;
    u=n%10;
    if(m == u && d == c)
    {
        printf("palindrome");
    }else{
        printf("n'est pas palindrome");
    }
}
