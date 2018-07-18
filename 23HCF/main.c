#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,H;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    for(H=a<b?a:b;H>=1;H--){

        if(a%H==0 && b%H==0)
            break;
    }


    printf("\nThe HCF of %d and %d is %d",a,b,H);
    return 0;
}
