#include<stdio.h>
int main ()
{
    int a,b,x,y,z;
    scanf("%d",&a);
    if (a%5==0)
    {
        x=a/5;
        y=a/10;
        z=a%10;
        if (x>y && z!=5)
        {
            b=y;
        }
        else if (x>y && z==5)
        {
            b=y+1;
        }
        else if (y>x)
        {
            b=x;
        }
        else if (a%10==5)
        {
            b=y+5;
        }
    }
    else
    {
        b=-1;
    }
    printf("%d",b);
}