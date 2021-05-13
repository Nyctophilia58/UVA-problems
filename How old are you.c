#include<stdio.h>
int main()
{
    int t,i,d1,m1,y1,d2,m2,y2,age;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        age=0;
        age=y1-y2;
        if(m2>m1)
        {
            age--;
        }
        else if(m2==m1)
        {
            if(d2>d1)
            {
                age--;
            }
        }
        if(age<0)
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(age>130)
        {
            printf("Case #%d: Check birth date\n",i);
        }
        else
        {
            printf("Case #%d: %d\n",i,age);
        }
    }
    return 0;
}
