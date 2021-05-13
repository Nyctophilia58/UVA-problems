#include<stdio.h>
int main()
{
    int n,i,j,k,array[10],t,g;
    char string[12],st[12];
    while(scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%s ",&string[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%s %d\n",string[i],array[i]);
        }
    }
    return 0;
}
