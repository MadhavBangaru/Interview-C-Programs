#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&a);

    for(i=a;i>=0;i--)
        sum = sum +i;

    printf("The sum of %d natural numbers is %d",a,sum);
    return 0;
}
