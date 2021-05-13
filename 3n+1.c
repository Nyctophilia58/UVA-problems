#include<stdio.h>
int main()
{
    long int i,j,n;
    int k,x,m;
    while(scanf("%ld%ld",&i,&j)!=EOF && i>0 && j>0)
    {
        k=1;
        printf("%ld %ld ",i,j);
        if(j<i)
        {
            x=i;
            i=j;
            j=x;
        }
        for(n=i;n<=j;n++)
        {
            x=n;
            m=1;
            while(n!=1)
            {
                if(n%2!=0)
                {
                    n=3*n+1;
                }
                else
                {
                    n=n/2;
                }
                m++;
            }
            if(k<=m)
            {
                k=m;
            }
            n=x;
        }
        printf("%d\n",k);
    }
    return 0;
}
