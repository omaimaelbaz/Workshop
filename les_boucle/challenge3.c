#include <stdio.h>
int main ()
{
    int i ;
    int nbr;
    printf("enter votre nombre :");
    scanf("%d", &nbr);
    
    for ( i = 2; i <=nbr -1 ;i++)
    {
        if ( nbr%i==0)
        {
            printf (" %d est pas premier :" , nbr);
            break;
        }
        else 
        {
            printf(" %d est  premier :" , nbr);
            break;

        }


        
    }

    
}