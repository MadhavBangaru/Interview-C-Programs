#include <stdio.h>

int main()
{
    int a[6]={12,3,45,67,94,55},i,n,found=0;
    printf("Enter number to be found");
    scanf("%d",&n);
    for(i=0;i<6;i++){
        if(a[i]==n){
            found=1;
        }
    }
    if(found==1){
        printf("FOund");
    }else{
        printf("not");
    }

    return 0;
}
