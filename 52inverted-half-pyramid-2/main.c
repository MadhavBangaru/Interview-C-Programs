#include <stdio.h>

int main()
{
    int i,j,n;
    printf("\nEnter no. of rows");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n;++j){
            if(j>=n+1-i)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }

    return 0;
}

