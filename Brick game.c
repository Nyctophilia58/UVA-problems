#include<stdio.h>
int main()
{
    int test,i,j,array[9],n;
    scanf("%d",&test);
    if(test<=100)
    {
        for(i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%d",&array[j]);
            }
            printf("Case %d: %d\n",i,array[n/2]);
        }
    }
    return 0;
}
