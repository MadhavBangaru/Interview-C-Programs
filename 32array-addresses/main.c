#include <stdio.h>

int main()
{
    int j[5],i;
    printf("Enter 5 nums");
    for(i=0;i<5;i++){
    scanf("%d",&j[i]);}
    
    for(i=0;i<5;i++){
        printf("\n%d %u",j[i],&j[i]);
    }
    
    

    return 0;
}
