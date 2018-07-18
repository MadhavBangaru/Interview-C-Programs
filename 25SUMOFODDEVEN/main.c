#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],odd=0,even=0,i;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++){
     scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){

        if(a[i]%2==0){
                even = even + a[i];
        }else{
                odd = odd+ a[i];
        }
    }
    printf("Sum of odd numbers is %d and even numbers is %d ",odd,even);

    return 0;
}
