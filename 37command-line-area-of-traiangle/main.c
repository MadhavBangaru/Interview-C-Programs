#include <stdio.h>
#define PI 3.14
int main(int argc, char *argv[])
{
    int d;
    float a=0;
    d= atoi(argv[1]);
    printf("\n%s",argv[1]);
    a=(PI*d*d)/4;
    printf("\n%.2f",a);

    return 0;
}
