#include <stdio.h>

int main()
{
    int A[100],i,n,j,temp;
    printf("\nEnter no of elements :");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }printf("\nElemets after sorting\n");
    
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    return 0;
}
