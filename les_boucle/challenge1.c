#include<stdio.h>
int main()
{
    int i;
    int N;
    printf("enter un nombre :");
    scanf("%d" , &N);
    i =1;
    while ( i<= 10)
    {
        printf("%d * %d = %d \n" , N ,i, N*i );
        i++;
    }
}