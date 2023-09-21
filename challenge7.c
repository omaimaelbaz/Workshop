#include <stdio.h>
int main () {
    int number ;
    int num1;
    int num2;
    int num3 ;
    int reverse ;
    
    printf("enter un nombre :");
    scanf ("%d" , &number);
    num1 = number / 100 ;
    num2 = ( number % 100 ) / 10 ;
    num3 = ( number % 10 ) ;
    printf ("number 1 est  : %d \n" , num1 );
    printf ("number 2 est : %d \n" , num2);
    printf ("number 3 est : %d \n" , num3);
    // reverse 
    reverse = num1 *1 + num2 * 10 + num3 * 100 ;
    printf (" reverse est :%d ", reverse);


}