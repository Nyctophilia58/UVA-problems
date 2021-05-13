#include<stdio.h>
int main()
{
    int t,i=1,j,n,array_num[1000],c,sum;
    double avg,total;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&array_num[i]);
            sum=sum+array_num[i];
        }
        avg=sum*1.00/n;
        for(i=0;i<n;i++)
        {
            if(array_num[i]>avg)
            {
                c++;
            }
        }
        total=(c*100.00)/n;
        printf("%.3lf%%\n",total);
    }
    return 0;
}
