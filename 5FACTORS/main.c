#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Enter a number\n");
    scanf("%d",&a);

    for (i=1;i<=a;i++){
        if(a%i==0){
            printf("\nFactors :%d",i);
        }else{
            continue;
        }
    }
    return 0;
}
