#include<stdio.h>
int main()
{
    int N,i;
    while(scanf("%d",&N))
    {
        i=N;
        if(i==0)
        {
            break;
        }
        if(i<=100)
        {
            i=91;
        }
        else
        {
            i=i-10;
            if(i<=100)
            {
                i=91;
            }
        }
        printf("f91(%d) = %d\n",N,i);
    }
    return 0;
}

