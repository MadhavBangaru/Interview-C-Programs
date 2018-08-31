#include <stdio.h>

int main()
{
    int binary,decimal=0,s=0,count=0,i,var,rem;
    printf("Enter a binary number :");
    scanf("%d",&binary);
    var=binary;
    
    while(binary){
        rem=binary%10;
        binary=binary/10;
        count++;
    }
    binary = var;
    for(i=0;i<=count;i++){
        rem=binary%10;
        s= s+ pow(2,i)*rem;
        binary=binary/10;
    }
    printf("The decimal equivalent of binary %d is %d ",var,s);
    

    return 0;
}
