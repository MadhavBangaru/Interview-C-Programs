#include <stdio.h>
#include<math.h>

int main()
{
    int bin,i=0,dec=0,var,octal=0;
    printf("Enter a binary number :");
    scanf("%d",&bin);
    var=bin;
    while(bin){
        dec= dec+ pow(2,i)*(bin%10);
        bin = bin/10;
        i++;
    }
    
    i=1;
    while(dec){
        octal=octal+(dec%8)*i;
        dec=dec/8;
        i=i*10;
    }
    printf("The octal equivalent of binary %d is %d ",var,octal);
    

    return 0;
}

