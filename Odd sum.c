#include<stdio.h>
int main()
{
    int b,e,t,i,j,s;
    scanf("%d",&t);
    if(t>=1 && t<=100)
    {
        for(i=1;i<=t;i++)
        {
            s=0;
            scanf("%d%d",&b,&e);
            if(b>=0 && e>=0 && b<=e && e<=100)
            {
                for(j=e;j>=b;j--)
                {
                    if(j%2==1)
                    {
                        s=s+j;
                    }
                }
                printf("Case %d: %d\n",i,s);
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
