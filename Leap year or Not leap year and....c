#include<stdio.h>
int main()
{
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if((year%400==0) || (year%4==0 && year%100!=0))
        {
            printf("This is leap year.\n");
            if(year%15==0)
            {
                printf("This is huluculu festival year.\n");
            }
            if(year%55==0)
                {
                    printf("This is bulukulu festival year.\n");
                }
        }
        else if(year%15==0)
        {
            printf("This is huluculu festival year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }
        printf("\n");
    }
    return 0;
}
