#include <stdio.h>

void main() {
    char g;
    int t;
    float p;
    do {
    printf("Donner g (m/f): ");
        scanf(" %c", &g); 
    } while (g != 'm' && g != 'f');
    
    do {
        printf("Donner la taille: ");
        scanf("%d", &t);
    } while (t <= 0);
    
    if (g == 'm') {
        p = (t - 100) - (t - 150) / 4;  
    } else {
        p = (t - 100) - (t - 120) / 4; 
    }
    
    printf("La taille ideale est %.2f", p);  
    
}
