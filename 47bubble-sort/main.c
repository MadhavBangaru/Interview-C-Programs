#include <stdio.h>

int main()
{
    int A[100],i,n,temp,r;
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter the elements ");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(r=1;r<n;r++){
        for(i=0;i<=n-1;i++){
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    printf("Elements after sorting\n");
    for(i=0;i<=n-1;i++){
    printf("%d ",A[i]);}
    return 0;
}
