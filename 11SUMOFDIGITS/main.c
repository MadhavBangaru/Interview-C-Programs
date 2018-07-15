#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m, rem, result =0;
    printf("Enter a number\n");
    scanf("%d",&a);
    m=a;

    while(m>0){

        rem = m%10;
        m=m/10;
        result = result + rem;
    }
    printf("Sum of digits in %d is %d\n",a,result);
    return 0;
}
