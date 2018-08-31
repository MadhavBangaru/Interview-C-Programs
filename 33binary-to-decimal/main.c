#include <stdio.h>
#include<math.h>

int main()
{
    int bin,i=0,s=0,var;
    printf("Enter a binary number :");
    scanf("%d",&bin);
    var=bin;
    while(bin){
        s= s+ pow(2,i)*(bin%10);
        bin = bin/10;
        i++;
    }
    printf("The decimal equivalent of binary %d is %d ",var,s);
    

    return 0;
}
