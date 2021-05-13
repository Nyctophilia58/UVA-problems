#include<stdio.h>
int main()
{
    long int a,b;
    int s,c;
    while(scanf("%ld%ld",&a,&b))
    {
        if(a==0 && b==0)
        {
            break;
        }
        c=0;
        s=0;
        while(a||b)
        {
            s=(a%10+b%10+s)/10;
            a=a/10;
            b=b/10;
            c=c+s;
        }
        if(c==0)
        {
            printf("No carry operation.\n");
        }
        else if(c==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",c);
        }
    }
    return 0;
}
