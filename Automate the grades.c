#include<stdio.h>
int main()
{
    int t,i,trm1,trm2,fnl,A,T1,T2,T3,s;
    float av,total;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&trm1,&trm2,&fnl,&A,&T1,&T2,&T3);
        if(T1<T2)
        {
            s=T2;
            T2=T1;
            T1=s;
        }
        if(T2<T3)
        {
            s=T3;
            T3=T2;
            T2=s;
        }
        av=(T1+T2)/2;
        total=trm1+trm2+fnl+A+av;
        if(total>=90)
        {
            printf("Case %d: A\n",i);
        }
        else if(total>=80)
        {
            printf("Case %d: B\n",i);
        }
        else if(total>=70)
        {
            printf("Case %d: C\n",i);
        }
        else if(total>=60)
        {
            printf("Case %d: D\n",i);
        }
        else
        {
            printf("Case %d: F\n",i);
        }
    }
    return 0;
}
