#include<stdio.h>
#include<string.h>
int main()
{
    char string[10000];
    int i,c,l;
    while(gets(string))
    {
        l=0;
        c=0;
        l=strlen(string);
        for(i=0;i<l;i++)
        {
            if(string[i]=='"')
            {
                c++;
                if(c%2==0)
                {
                    printf("''");
                }
                else
                {
                    printf("``");
                }
            }
            else
            {
                printf("%c",string[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
