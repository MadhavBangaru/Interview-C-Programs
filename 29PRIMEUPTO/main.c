#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0

bool isPrime(int a){

    int i;
    for(i=2;i<a;i++){
        if(a%i==0)
            break;
    }
    if(i==a)
        return true;
    else
        return false;
}

int main()
{
    int a,i;
    printf("Enter last number");
    scanf("%d",&a);

    for(i=2;i<=a;i++){
        if(isPrime(i))
            printf("%d\n",i);
        }

    return 0;
}
