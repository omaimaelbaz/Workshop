#include <stdio.h>
int main (){
    int a ;
    int b ;
    int sum ;
    printf ("enter la valeur de a :") ;
    scanf("%d" ,&a);
    printf ("enter la valeur de b :") ;
    scanf("%d" ,&b) ;
    sum = a + b ;
    if ( a != b) {
        printf("la somme est : %d" ,sum);
    }
    else
    {
        sum = (a + b) * 3;
         printf("la somme est : %d" ,sum);

    }
    
}