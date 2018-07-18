#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,greatest;

    for(i=0;i<10;i++){
    printf("Enter a number\n");
    scanf("%d",&a[i]);
    }

    greatest=a[0];

    for(i=0;i<10;i++){
    if(a[i]>greatest)
        greatest=a[i];
    }

    printf("The greatest number is %d",greatest);
    return 0;
}
