#include<stdio.h>
#include<string.h>
int main()
{
    char string[100000],c,i,l;
    while(gets(string))
    {
        l=strlen(string);
        c=0;
        for(i=0;i<l;i++)
        {
            if(string[i]==32)
            {

            }
        }
        printf("%d\n",c+1);
    }
    return 0;
}
