#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,prod=1;
    printf("Enter a number\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        prod=prod*i;
    }
    printf("The product of %d numbers is %d ",a,prod);
    return 0;
}
