#include<stdio.h>
int main ()
{
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        if (b>c)
        {
            sum=a+b;
        }
        else 
        {
            sum=a+c;
        }
    }
    else if (b>a && b>c)
    {
        if (a>c)
        {
            sum=b+a;
        }
        else
        {
            sum=b+c;
        }
    }
    else
    {
        if (a>b)
        {
            sum=a+c;
        }
        else
        {
            sum=b+c;
        }
    }
    printf("%d",sum);
}