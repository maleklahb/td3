#include <stdio.h>
void main(){
    int a,b,s,p;
    printf("donner a ");
    scanf("%d",&a);
    printf("donner b ");
    scanf("%d",&b);
    s=a+b;
    p=a*b;
    if (s % 2 == 0 )
    {
        printf(" la somme est paire ");
    }else{
        printf(" la somme pas paire");
    }
    if(p < 0){
        printf(" , le produit est negatif");
    }else{
        printf(" , le produit est positif");
    }
}