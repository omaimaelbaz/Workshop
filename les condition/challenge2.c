#include <stdio.h>
int main () {
    char  voyelle  ;
    printf(" entrer un caractere : ");
    scanf("%c" , &voyelle) ;
    switch (voyelle)
    {
    case  'a': 
    case 'e' :
    case  'i':
    case  'o':
    case  'u':
    case 'y' :
    
        printf(" cette caractere  %c est une voyelle" , voyelle) ;
        break;
    
    default:
            printf(" cette caractere  %c est une constant " , voyelle) ;
             break;
    
            

        
    }

}