#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d\n",stime.wDay,stime.wMonth,stime.wYear);
    return 0;
}
