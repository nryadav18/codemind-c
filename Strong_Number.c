#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int q,r,wt=1,s=0;
    q=a;
    while (q!=0)
    {
        r=q%10;
        for (int i=1;i<=r;i++)
        {
            wt=wt*i;
        }
        s=s+wt;
        wt=1;
        q=q/10;
    }
    if (s==a) printf("The number %d is a strong number",a);
    else printf("The number %d is not a strong number",a);
}