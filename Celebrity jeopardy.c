#include<stdio.h>
int main()
{
    char x[10000];
    while(gets(x))
    {
        printf("%s\n",x);
    }
    return 0;
}
