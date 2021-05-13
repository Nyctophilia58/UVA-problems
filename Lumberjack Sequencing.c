#include<stdio.h>
int main()
{
    int n,array[10],i,d,a;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--)
    {
        d=0;
        a=0;
        for(i=0;i<10;i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=1;i<10;i++)
        {
            if(array[i-1]>=array[i])
            {
                d++;
            }
            else if(array[i-1]<=array[i])
            {
                a++;
            }
        }
        if(d==9 || a==9)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
