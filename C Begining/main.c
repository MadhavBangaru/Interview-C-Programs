#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int i;
    int meatBalls[5];
    int totalBalls = 0;

    for(i=0;i<5;i++){

        printf("How many meatballs did u eat on day %d \n", i+1);
        scanf(" %d", &meatBalls[i]);}

       for(i=0;i<5;i++){
        totalBalls +=meatBalls[i];
       }

       int avg = totalBalls/5;
       printf(" u ate %d total meatballs and average of %d meatballs per day", totalBalls,avg);

   return 0;

}
