#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Enter a number\n");
    scanf("%d",&a);

    for(i=2;a>1;i++){
        while(a%i==0){
            printf("%d ",i);
            a=a/i;
        }
    }
    return 0;
}
