#include<stdio.h>
int main()
{
    int c,a,sum;
    while(scanf("%d%d",&c,&a)!=EOF)
    {
        sum=c;
        while(c>=a)
        {
            sum=sum+c/a;
            c=c/a+c%a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
