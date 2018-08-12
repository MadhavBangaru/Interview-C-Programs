#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,min,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    min = a<b?a:b;
    for(i=2;i<=min;i++){
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==min+1)
        printf("%d and %d are co-prime numbers",a,b);
    else
        printf("%d and %d are not co-prime numbers",a,b);

    return 0;
}
