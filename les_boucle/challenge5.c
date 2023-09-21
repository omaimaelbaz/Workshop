#include <stdio.h>
int main() {
    int nbr, Inverse = 0;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nbr);
    while (nbr != 0) {
        Inverse = Inverse * 10 + nbr % 10; 
        nbr /= 10;
    }
        printf("Linverse: %d\n", Inverse);
}