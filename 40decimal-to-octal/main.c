#include <stdio.h>

int main()
{
    int dec,var,rem,octal=0,i=1;
    printf("\nEnter a decimal number :");
    scanf("%d",&dec);
    
    var=dec;
    while(dec){
        rem=dec%8;
        octal=octal+i*rem;
        dec=dec/8;
        i=i*10;
    }
    printf("\nThe octal equivalent of decimal %d is %d ",var,octal);

    return 0;
}
