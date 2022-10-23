//test

#include<stdio.h>
int main()
{
    int x;
    unsigned long long int y;
    while(scanf("%lld",&x)!=EOF)
    {
        y=0;
        while(x)
        {
            y=y+x*x*x;
            x--;
        }
        printf("%llu\n",y);
    }
    return 0;
}
