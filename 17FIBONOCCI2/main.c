#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

    return 0;
}
