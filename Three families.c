#include<stdio.h>
int main()
{
    int t;
    float a,b,p,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f",&a,&b,&p);
        s=0;
        s=(a+b)/3;
        a=a-s;
        b=b-s;
        s=a+b;
        p=p/s;
        printf("%.0f\n",a*p);
    }
    return 0;
}
