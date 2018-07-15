#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m,rem,revr=0;
    printf("Enter a number \n");
    scanf("%d",&a);
    m=a;

    while(m>0){

        rem = m%10;
        m=m/10;
        revr =revr*10 + rem;
    }
    printf("reverse of %d is %d\n", a, revr);

    return 0;
}
