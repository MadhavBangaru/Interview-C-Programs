#include <stdio.h>

int main()
{
    int yr;
    printf("Enter an year");
    scanf("%d",&yr);
    /*A leap year is exactly divisible by 4 except for century years 
    (years ending with 00). 
    The century year is a leap year only if it is perfectly divisible by 400.
    */
    if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0)
                printf("The given year is a leap year");
            else
                printf("The given year is not a leap year");
        }else
            printf("The given year is a leap year");
        
    }
    else
        printf("The given year is a not leap year");
    return 0;
}
