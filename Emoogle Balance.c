#include<stdio.h>
int main()
{
    int n,array[100],i,c,c1,j=1;
    while(1)
    {
        c=0;
        c1=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=0;i<n;i++)
        {
            if(array[i]>0)
            {
                c++;
            }
            else
            {
                c1++;
            }
        }
        printf("Case %d: %d\n",j,c-c1);
        j++;
    }
    return 0;
}
