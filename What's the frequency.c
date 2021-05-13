#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000000],i,l,ch[1000000],j,c;
    while(gets(string))
    {
        l=strlen(string);
        for(i=0;i<l;i++)
        {
            ch[i]=-1;
        }
        for(i=0;i<l;i++)
        {
            c=1;
            for(j=i+1;j<l;j++)
            {
                if(string[i]==string[j] && string[i]!=32)
                {
                    c++;
                    ch[j]=0;
                }
            }
            if(ch[i]!=0)
            {
                ch[i]=c;
            }
        }
        c=ch[0];
        for(i=1;i<l;i++)
        {
            if(c<ch[i])
            {
                c=ch[i];
            }
        }
        printf("%s\n",ch);
    }
    return 0;
}
