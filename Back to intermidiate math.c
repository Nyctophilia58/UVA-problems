#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double p,r,d,v,u;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        p=d/u;
        r=d/(sqrt(u*u-v*v));
        if(v>=u || p==r)
        {
            printf("Case %d: can't determine\n",i);
            continue;
        }
        printf("Case %d: %.3lf\n",i,r-p);
    }
    return 0;
}
