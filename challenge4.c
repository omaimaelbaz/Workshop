#include <stdio.h>
int main (){

    float a ;
    float b;
    float c ;
    float d ;
    float sum ;
    float moy ;
    printf("enter nomber1  :") ;
    scanf ("%f" ,&a);
    printf("enter nomber2  :");
    scanf ("%f" ,&b);
    printf("enter nomber3  :");
    scanf ("%f" ,&c);
    printf("enter nomber4 :");
    scanf ("%f" ,&d);
    printf(" calculer la somme et la moyene de a ,b ,c et d \n");
    sum = a + b + c + d ;
    moy = a + b + c + d / 4 ;
    printf ( " la somme est : %f \n" , sum) ;
    printf ( " la moyeene est : %f \n" , moy) ;




}