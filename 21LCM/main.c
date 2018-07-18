#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,l;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b))
        if(l%a==0 && l%b==0)
            break;

    printf("The LCM is %d",l);
    return 0;
}
