#include <stdio.h>

int main()
{
    int a,b,c;
    float s,ar;
    printf("\nEnter 3 sides of traingle");
    scanf("%d%d%d",&a,&b,&c);
    
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("\nThe perimeter is %.2f and area is %.2f",2*s,ar);

    return 0;
}
