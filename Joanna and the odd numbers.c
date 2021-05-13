#include<stdio.h>
int main()
{
    unsigned long long x,y;
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        x=n;
        y=n;
        for(i=1;i<n;i++)
        {
            x=x+2;
            y=y+x;
        }
        printf("%llu\n",y);
    }
    return 0;
}
