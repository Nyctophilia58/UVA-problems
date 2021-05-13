#include<stdio.h>
int main()
{
    int T,N,Array[50],i,j,c1,c2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        c1=0;
        c2=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&Array[j]);
        }
        for(j=0;j<N-1;j++)
        {
            if(Array[j]<Array[j+1])
            {
                c1++;
            }
            else if(Array[j]>Array[j+1])
            {
                c2++;
            }
        }
        printf("Case %d: %d %d\n",i,c1,c2);
    }
    return 0;
}
