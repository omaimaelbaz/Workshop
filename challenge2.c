#include <stdio.h>
int main () {

float C;
float F ;
printf(" enter la temperature en Fahrenheit : ");
scanf("%f", &F);
printf("  maintent eassy de transoformer la temperature Fahrenheit  en degre Celsius \n");
C = (F-32)/1.8 ;
printf(" la temperature   en degre Celsius est %f \n" ,C );



    if (C <= 0) {
        printf("Il est tres froid\n");
    } else if (C <= 7) {
        printf("Il est froid \n");
    } else if (C <= 30) {
        printf("Il est chaud\n");
    } else {
        printf("Il est tres chaud\n");
    }

}