#include<stdio.h>
int main()
{
    int n,s;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        s=0;
        while(1)
        {
            s=0;
            while(n!=0)
            {
                s=s+n%10;
                n=n/10;
            }
            if((s/10)==0)
            {
                break;
            }
            n=s;
        }
        printf("%d\n",s);
    }
    return 0;
}
