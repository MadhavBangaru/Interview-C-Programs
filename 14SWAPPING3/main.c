#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("\nEnter a number a= ");
    scanf("%d",&a);
    printf("\nEnter another number b= ");
    scanf("%d",&b);

    temp = a;
    a=b;
    b=temp;
    printf("\nAfter swapping a= %d b= %d",a,b);
    return 0;
}
