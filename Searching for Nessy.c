#include<stdio.h>
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        a=a/3;
        b=b/3;
        printf("%d\n",a*b);
    }
    return 0;
}
