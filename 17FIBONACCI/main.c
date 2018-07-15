#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,i;

    printf("Enter a number \n");
    scanf("%d",&a);

    int fib[a];
    fib[0]=0;
    fib[1]=1;

    for(i=2;i<=a;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(i=0;i<=a;i++){
        printf("%d ",fib[i]);
    }
    return 0;
}
