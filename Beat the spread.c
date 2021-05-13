#include<stdio.h>
int main()
{
    int t,s,d,i,r;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        scanf("%d%d",&s,&d);
        if(d>s || (s+d)%2!=0)
        {
            printf("impossible\n");
        }
        else
        {
            i=(s+d)/2;
            r=s-i;
            printf("%d %d\n",i,r);
        }
    }
    return 0;
}
