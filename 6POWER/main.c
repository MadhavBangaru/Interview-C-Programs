#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,i,res=1;
    printf("Enter base :\n");
    scanf("%d",&a);

    printf("Enter power :\n");
    scanf("%d",&b);

    for(i=1;i<=b;i++){
        res = res*a;
    }

    printf("%d to the power of %d is %d",a,b,res);
    return 0;
}
