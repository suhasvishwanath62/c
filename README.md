#include<stdio.h>
#include<string.h>
void main()
{
    int l = 0;
    char str[20];
    gets(str);
    while(str[l++]);
    while(l)
    {
        printf("%c",str[--l]);
    }
}
