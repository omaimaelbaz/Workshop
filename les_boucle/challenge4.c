#include <stdio.h>
int main ()
{
    int nbr ;
    int i ;
    int somme = 0;
    i = 0;
    while ( i <= 100)
    {
        printf( "enter votre nombre : \n ");
        scanf ("%d" ,&nbr);
        if ( nbr % 10 == 0)
        {
            printf("continue \n");
            
        }
        else   
            printf(" %d cett nombre se termine pas par '0' enter autre nombre" , nbr);
        i++;
    }
}