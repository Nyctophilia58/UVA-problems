#include<stdio.h>
int main()
{
    int N,i,s;
    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
        {
            break;
        }
        s=0;
        for(i=1;i<=N;i++)
        {
            s=s+i*i;
        }
        printf("%d\n",s);
    }
    return 0;
}
