#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char string[1000];
        gets(string);
        l=strlen(string);
        for(i=0;i<l;i++)
        {
            string[i]=string[i]-7;
        }
        printf("%s\n",string);
    return 0;
}
