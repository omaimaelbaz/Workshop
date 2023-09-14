#include <stdio.h>
int main ()
{
    int a ;
    int b ;
    int sum ;
    int sou ;
    int mult ;
    int div ;
    int modulo;

    printf ("enter la valeur de a  :");
    scanf("%d" ,&a);
    printf ("enter la valeur de b :");
    scanf("%d" ,&b);
    printf("calculer la somme et la soustraction , multplication , divistion , et modulo  de a et b : \n");
    sum = a+b;
    printf("la somme est : %d \n" , sum);
    sou = a - b;
    printf("la soustraction est : %d \n" , sou);
    mult = a * b;
    printf("la multplication est : %d \n" , mult);
    div = a / b;
    printf("la division est : %d \n" , div);
    modulo = a % b;
    printf(" le modulo est : %d" , modulo);
}