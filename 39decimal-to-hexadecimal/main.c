#include <stdio.h>

int main()
{
    long dec,rem,var;
    int j=0,i;
    char hexaDecimal[100];
    printf("Enter a decimal number");
    scanf("%ld",&dec);
    var=dec;
    while(dec){
        rem=dec%16;
        if(rem<10){
            hexaDecimal[j++]=48+rem;
        }else{
            hexaDecimal[j++]=55+rem;
        }
        dec=dec/16;
    }
    printf("The HexaDecimal equivalent of %ld is ",var);
    for(i=j;i>=0;i--){
    printf("%c",hexaDecimal[i]);
    }
    return 0;
}

