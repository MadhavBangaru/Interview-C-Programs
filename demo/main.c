#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i, b,c;
    float avg;
    for(i=0;i<=2;i++){
            switch(i){
        case 0: printf("Enter %d st number",i+1);
                scanf("%d",&a);
                break;
        case 1: printf("Enter %d nd number",i+1);
                scanf("%d",&b);
                break;
        case 2: printf("Enter %d rd number",i+1);
                scanf("%d",&c);
                break;
        default :
            printf("No new number!");
            break;
            }


            }

    avg = (a+b+c)/3;
            printf("the average is %.2f",avg);


    return 0;
}
