#include <stdio.h>
int main ()
{
    int jour ;
    int month ;
    int year ;
    printf("enter la date en format nombre : ") ;
    scanf ( "%d / %d / %d " , &jour, &month ,&year );
    switch (month)
    {
    case 1:
    printf ("%d / janvier / %d " , &jour , &month , &year) ;
    break;
    case 2:
    printf ("%d / feb / %d " , &jour , &month , &year) ;
    break;
    case 3:
    printf ("%d / mars / %d " , &jour , &month , &year) ;
    break;
    case 4:
    printf ("%d / avr / %d " , &jour , &month , &year) ;
    break;
    case 6:
    printf ("%d / mai / %d " , &jour , &month , &year) ;
    break;
    case 7:
    printf ("%d / juin / %d " , &jour , &month , &year) ;
    break;
    case 8:
    printf ("%d / juiler / %d " , &jour , &month , &year) ;
    break;
    case 1:
    printf ("%d / aout / %d " , &jour , &month , &year) ;
    break;
    case 1:
    printf ("%d / janvier / %d " , &jour , &month , &year) ;
    break;

    
    default:
        break;
    }



}