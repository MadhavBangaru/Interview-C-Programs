#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    printf("Enter a number :\n");
    scanf("%d",&a);
    printf("The first %d odd numbers are :\n",a);

    for(i=1;i<=a;i++){

        printf(" %d",2*i-1);
    }
    return 0;
}
