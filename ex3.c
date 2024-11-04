#include <stdio.h>

void main() {
    #define sc 0.2
    float sh, sb, pa, r, a, sn;
    int h;
    
    printf("Entrez le nombre d'heures travaillees: ");
    scanf("%d", &h);
    
    printf("Entrez le salaire horaire: ");
    scanf("%f", &sh);
    
    printf("Entrez l'anciennete de l'employe: ");
    scanf("%f", &a);
    sb = sh * h;  
    if ((a >= 0) && (a <= 20)) {
        pa = 0.02 * sb;
    } else {
        pa = 0.05 * sb;
    }
    r = sb * sc;
    sn = sb + pa - r;  
    printf("Salaire de base: %.2f", sb);
    printf("Prime d'anciennete: %.2f", pa);
    printf("Retenue: %.2f", r);
    printf("Salaire net: %.2f", sn);
}

