#include <stdio.h>

int main()
{
    int dec,binary=0,var,i=1,rem;
    printf("Enter a decimal number");
    scanf("%d",&dec);
    var=dec;
    while(dec!=0){
        rem=dec%2;
        dec=dec/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    
    printf("The binary equivalent for the decimal %d is %d",var,binary);
    return 0;
}
