#include<stdio.h>
int main()
{
    int t,i,n,array[20],m,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        m=array[0];
        for(i=1;i<n;i++)
        {
            if(m>array[i])
            {
                m=array[i];
            }
        }
        j=array[0];
        for(i=1;i<n;i++)
        {
            if(j<array[i])
            {
                j=array[i];
            }
        }
        printf("%d\n",(j-m)*2);
    }
    return 0;
}
