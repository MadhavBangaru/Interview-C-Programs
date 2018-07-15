#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isArm(int a){

    int m,rem, result=0;
    m=a;
    while(m>0){
        rem = m%10;
        m=m/10;
        result = result + rem*rem*rem;
    }
    if(result == a)
        return true;
    else
        return false;
}
int main()
{
    int a,b,i;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
        if(isArm(i))
            printf("%d ",i);

    }

    return 0;
}
