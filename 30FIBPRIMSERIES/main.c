#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);
void prime(int m);
int main()
{
    int a;
    printf("Enter the term\n");
    scanf("%d",&a);

    if(a%2==1)
        fibonacci((a+1)/2);
    else
        prime(a/2);
    return 0;
}

void fibonacci(int n){
    int i, t1=0,t2=1,nextTerm;
    for(i=1;i<=n;i++){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    printf("\n%d",t1);

}
void prime(int m){
    int i,j,flag,count=0;
    for(i=2;i<=1000;i++){
        flag=0;
        for(j=2;j<i;j++)
            {
                if(i%j==0)
                    {
                    flag=1;
                    break;
                    }
            }
        if(flag==0)
            count++;
        if(count==m)
            {
            printf("\n%d",i);
            break;
            }
        }
    }


