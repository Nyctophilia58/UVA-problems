#include<stdio.h>
int main()
{
    int pa,b,h,w,p,be[13],i,array[18],j;
    while(scanf("%d%d%d%d",&pa,&b,&h,&w)!=EOF)
    {
        i=0;
        while(i<h)
        {
            scanf("%d",&p);
            for(j=1;j<=w;j++)
            {
                scanf("%d",&be[j]);
                if(be[j]<pa)
                {
                    j=0;
                    break;
                }
            }
            array[i]=j*b;
            i++;
        }
        w=0;
        for(i=0;i<h;i++)
        {
            for(j=i+1;j<h;j++)
            {
                if(array[i]>=array[j])
                {
                    w=array[i];
                    array[i]=array[j];
                    array[j]=w;
                }
            }
        }
        for(i=0;i<h;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
        if(array[0]==0 || array[0]>b)
        {
            printf("stay home\n");
        }
        else
        {
            printf("%d\n",array[0]);
        }
    }
    return 0;
}
