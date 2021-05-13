#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000],s1[100000];
    int i,l,l1,s=0,s1=0;
    scanf("%[^\n]",s);
    scanf("%[^\n]",s1);
    l=strlen(l);
    l1=strlen(l1);
    for(i=0;i<l;i++)
    {
        if(s[i]=='|')
        {
            s=s+1
        }
        else if(s[i]=='n')
        {
            s=s+10;
        }
        else if(s[i]=='9')
        {
            s=s+100;
        }
        else if(s[i]=='8')
        {
            s=s+1000;
        }
        else if(s[i]=='r')
        {
            s=s+10000;
        }
    }
    for(i=0;i<l1;i++)
    {
        if(s1[i]=='|')
        {
            s1=s1+1
        }
        else if(s1[i]=='n')
        {
            s1=s1+10;
        }
        else if(s1[i]=='9')
        {
            s1=s1+100;
        }
        else if(s1[i]=='8')
        {
            s1=s1+1000;
        }
        else if(s1[i]=='r')
        {
            s1=s1+10000;
        }
    }
    s=s*s1;
    if()
    return 0;
}
