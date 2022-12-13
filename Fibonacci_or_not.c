#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,cnt=0;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        if (c==n)
        {
            cnt++;
            break;
        }
        a=b;
        b=c;
    }
    if (cnt==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}