#include<stdio.h>
int main()
{
    int t;
    char string[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&string);
        if(string[0]=='o' || string[1]=='n' || string[2]=='e')
        {
            printf("1\n");
        }
        else if(string[0]=='t' || string[1]=='w' || string[2]=='o')
        {
            printf("2\n");
        }
        else if(string[0]=='t' || string[1]=='h' || string[2]=='r' || string[0]=='e' || string[1]=='e')
        {
            printf("3\n");
        }
    }
    return 0;
}
