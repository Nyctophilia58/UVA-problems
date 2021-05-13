#include<stdio.h>
int main()
{
    char string[14];
    int i=1;
    while(scanf("%s",string)!=EOF && string[0]!='#')
    {
        if(string[0]=='H' && string[1]=='E' && string[2]=='L' && string[3]=='L' && string[4]=='O')
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(string[0]=='H' && string[1]=='O' && string[2]=='L' && string[3]=='A')
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(string[0]=='H' && string[1]=='A' && string[2]=='L' && string[3]=='L' && string[4]=='O')
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(string[0]=='B' && string[1]=='O' && string[2]=='N' && string[3]=='J' && string[4]=='O' && string[5]=='U' && string[6]=='R')
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(string[0]=='C' && string[1]=='I' && string[2]=='A' && string[3]=='O')
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(string[0]=='Z' && string[1]=='D' && string[2]=='R' && string[3]=='A' && string[4]=='V' && string[5]=='S' && string[6]=='T' && string[7]=='V' && string[8]=='U' && string[9]=='J' && string[10]=='T' && string[11]=='E')
        {
            printf("Case %d: RUSSIAN\n",i);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",i);
        }
        i++;
    }
    return 0;
}
