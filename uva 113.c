#include<stdio.h>
int main()
{
    unsigned long long p;
    int n,k;
    while(scanf("%d%llu",&n,&p)!=EOF)
    {
        k=0;
        while(p!=1)
        {
            p=(float)p/n;
            k++;
        }
        printf("%d\n",k);
    }
    return 0;
}

