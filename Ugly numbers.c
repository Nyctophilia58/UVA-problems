#include<stdio.h>
int main()
{
    int n,i=1,c=0;
    while(c!=1500)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            c++;
        }
        i++;
    }
    printf("The 1500'th ugly number is %d.\n",i-1);
    return 0;
}
