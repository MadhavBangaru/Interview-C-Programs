#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m,rem,rev=0;
    printf("Enter a number\n");
    scanf("%d",&a);

    m=a;
    while(m>0){
        rem = m %10;
        m=m/10;
        rev = rev*10 +rem;
    }
    if(rev==a)
        printf("%d is a palindrome number\n",a);
    else
        printf("%d is not a palindrome number\n",a);
    return 0;
}
