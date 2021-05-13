#include<stdio.h>
int main()
{
    int t,i,n,k,p,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        for(j=1;j<=p;j++)
        {
            if(k==n)
            {
                k=0;
            }
            k++;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
