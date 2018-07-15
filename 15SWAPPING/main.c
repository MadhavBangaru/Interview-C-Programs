#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\nEnter a number a= ");
    scanf("%d",&a);
    printf("\nEnter another number b= ");
    scanf("%d",&b);

    a=a+b;
    b = a-b;
    a= a-b;

    printf("\nAfter swapping a= %d b= %d",a,b);

    return 0;
}
