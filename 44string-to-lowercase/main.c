#include <stdio.h>
#include<conio.h>

int main()
{
    int i;
    char s[10];
    puts("\n Enter any string");
    gets(s);
    
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
    }
    printf("\n String in lower case is %s",s);
    return 0;
}
