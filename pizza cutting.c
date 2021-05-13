#include<stdio.h>
int main()
{
    long int N;
    while(scanf("%ld",&N))
    {
        if(N<0)
        {
            break;
        }
        printf("%ld\n",N*(N+1)/2+1);
    }
    return 0;
}
