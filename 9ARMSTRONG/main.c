#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool isArm(int a){
    int rem,result=0,m;
    m=a;

    while(m>0){
        rem = m%10;
        m = m/10;
        result = result + rem*rem*rem;
        }
    if(result==a)
        return true;
    else
        return false;
}
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(isArm(a))
        printf("%d is an ARMSTRONG NUMBER",a);
        else
        printf("%d is is not an ARMSTRONG NUMBER",a);



    return 0;
}
