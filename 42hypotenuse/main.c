#include <stdio.h>

int main()
{
    float b, ht,hp;
    printf("\nEnter base of right angled triangle");
    scanf("%f",&b);
    printf("\nEnter height of right angled triangle");
    scanf("%f",&ht);
    hp= sqrt(b*b+ht*ht);
    
    printf("\nHypotenuse of this triangle is : %.2f",hp);

    return 0;
}
