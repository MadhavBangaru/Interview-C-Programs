#include <stdio.h>

int main(int argc,char* argv[])
{
    int a,b,G;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    for(G=a<b?a:b;G>=1;G--){
        if(a%G==0 && b%G==0)
        break;
    }
    printf("The GCD or HCF of %d and %d is %d",a,b,G);

    return 0;
}
