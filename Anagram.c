#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,m,l;
    char s[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            for(j=i;j<l;j++)
            {
                if(s[i]>=s[j])
                {
                    m=s[i];
                    s[i]=s[j];
                    s[j]=m;
                }
            }
        }

    }
    return 0;
}
