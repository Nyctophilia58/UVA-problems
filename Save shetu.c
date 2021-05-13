#include<stdio.h>
int main()
{
    int a=0,t,k,op1[6],op2[6];
    scanf("%d",&t);
    while(t--)
    {
        if(t%2!=0)
        {
            scanf("%s %d",&op1,&k);
            a=a+k;
        }
        else
        {
            scanf("%s",&op2);
            printf("%d\n",a);
        }
    }
    return 0;
}
