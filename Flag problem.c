 #include<stdio.h>
int main()
{
    int t,l;
    float r,g;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        r=3.1416*(l/5.0)*(l/5.0);
        g=(l*((6*l)/10))-r;
        printf("%.2f %.2f\n",r,g);
    }
    return 0;
}
