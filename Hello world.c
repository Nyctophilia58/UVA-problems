#include<stdio.h>
int main()
{
    int n,c,i,j=1;
    while(scanf("%d",&n))
    {
        if(n<0)
        {
            break;
        }
        c=0;
        i=1;
        while(i<n)
        {
            i=i+c;
            c++;
        }
        printf("Case  %d:  %d\n",j,c);
        j++;
    }
    return 0;
}
