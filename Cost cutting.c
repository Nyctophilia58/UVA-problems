#include<stdio.h>
int main()
{
    int a,b,c,t,i=1;
    scanf("%d",&t);
    while(i<=t && t<20)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<1000 || a>10000 || b<1000 || b>10000 || c<1000 || c>10000)
        {
            break;
        }
        if((a<=b && a>=c) || (a<=c && a>=b))
        {
            printf("Case %d: %d\n",i,a);
        }
        else if((b<=a && b>=c) || (b<=c && b>=a))
        {
            printf("Case %d: %d\n",i,b);
        }
        else if((c<=a && c>=b) || (c<=b && c>=a))
        {
            printf("Case %d: %d\n",i,c);
        }
        i++;
    }
    return 0;
}
