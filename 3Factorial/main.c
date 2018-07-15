#include <stdio.h>
#include <stdlib.h>


int fact(int a){

    if(a==1 || a==0)
        return 1;
    return a*fact(a-1);
}
int main()
{

    int b,res;
     printf("Enter a number\n");
     scanf("%d",&b);
     res=fact(b);

     printf("Factorial is %d\n",res);
    return 0;
}
