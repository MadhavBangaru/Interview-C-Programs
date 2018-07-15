#include <stdio.h>
#include <stdlib.h>


int sumn(int a){
    if(a==0)
        return 0;
    return a+sumn(a-1);

}
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    printf("Sum of %d natural numbers is %d\n",a,sumn(a));

    return 0;
}
