#include <stdio.h>
void binary_search(int Arr[],int n, int s);
int main()
{
    int A[100],i,n,s;
    printf("\nEnter elements limit");
    scanf("%d",&n);
    printf("\nEnter elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("\n Enter an element to be searched");
    scanf("%d",&s);
    binary_search(A,n,s);
    return 0;
}
void binary_search(int Arr[],int n, int s){
    int start,last,middle;
    start=0;
    last=n-1;
    middle=(start+last)/2;
    
    while(start<=last){
        if(Arr[middle]  == s){
            printf("\nElement is found at index %d",middle+1);
            return;
        }
        else if(s<Arr[middle]){
            last= middle-1;
        }
        else{
            start = middle+1;
        }
    }
    printf("\nSearch unsuccesful");
    
    
}