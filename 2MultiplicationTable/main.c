#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Enter a number \n");
    scanf("%d",&a);

    for(i=1;i<=10;i++){
        printf("\t %d * %d = %d\n",a,i,a*i);
    }
    return 0;
}
