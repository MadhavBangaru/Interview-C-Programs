#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
typedef int bool;
#define true 1
#define false 0


bool isPrime(int a){

    int i,count=0;
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
    int a,b,i,count=0;
    printf("Enter first number \n");
    scanf("%d",&a);
    printf("Enter second number \n");
    scanf("%d",&b);

    for(i=a;i<=b;i++){

        if(isPrime(i))
            printf("%d \n",i);

    }
    return 0;
}
