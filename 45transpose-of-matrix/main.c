#include <stdio.h>

int main()
{
    int A[3][3],r,c;
    
    printf("Enter a matrix\n");
    
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("\nA[%d][%d]=",r,c);
            scanf("%d",&A[r][c]);
        }printf("\n");
    }
    printf("Entered matrix is\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%5d",A[r][c]);
        }printf("\n");
    }
    printf("\nIts transpose is \n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%5d",A[c][r]);
        }printf("\n");
    }

    return 0;
}
