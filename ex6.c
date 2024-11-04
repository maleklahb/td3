#include <stdio.h>
void main() {
    int j;

    printf("Entrez le numero du jour ");
    scanf("%d", &j);

    if (j >= 1 && j <= 5) {
        printf("Jour de travail");
    } else if (j == 6 || j == 7) {
        printf("Week-end");
    } else {
        printf("Numero de jour invalide");
    }
}
