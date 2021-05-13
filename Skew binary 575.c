#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char k[1000];
    int i,n,s,c,l;
    while(gets(k))
    {
        if(k[0]=='0')
        {
            break;
        }
        l=strlen(k);
        s=0;
        for(i=l-1,c=1;i>=0;i--,c++)
        {
            k[i]=k[i]-48;
            s=s+k[i]*(pow(2,c)-1);
        }
        printf("%d\n",s);
    }
    return 0;
}
