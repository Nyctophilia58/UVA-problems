#include<stdio.h>
int main()
{
    char s[5];
    int i=1;
    while(gets(s))
    {
        if(s[0]=='*')
        {
            break;
        }
        if(s[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(s[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
