#include<stdio.h>
int main()
{
    int t,i=1,n;
    scanf("%d",&t);
    if(t>=1 && t<=100)
    {
        while(i<=t)
        {
            scanf("%d",&n);
            if(n>=-1000 && n<=1000)
            {
                n=((n*63+7492)*5-498)/10;
                if(n<0)
                {
                    n=n*(-1);
                }
                printf("%d\n",n%10);
            }
            else
            {
                break;
            }
            i++;
        }
    }
    return 0;
}
