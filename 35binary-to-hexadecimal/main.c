#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    long binary,dec=0,rem,var;
    int i,j=0;
    char hexaDecimal[100];
    clrscr();
    printf("Enter a binary number");
    scanf("%ld",&binary);
    var=binary;
    while(binary){
        rem =binary%10;
        dec=dec+pow(2,i)*rem;
        binary=binary/10;
        i++;
    }
    printf("\n Decimal number is %ld\n",dec);
    while(dec){
        rem=dec%16;
        if(rem<10){
            hexaDecimal[j++]=48+rem;
        }else{
            hexaDecimal[j++]=55+rem;
        }
        dec=dec/16;
    }
    printf("The HexaDecimal equivalent of binary %ld is ",var);
    for(i=j;i>=0;i--){
        printf("%c",hexaDecimal[i]);
    }

    return 0;
}

