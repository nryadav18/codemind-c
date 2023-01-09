#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    float b,sc,t;
    if(a<=199)
    {
        b=1.20*a;
    }
    else if (a>=200 && a<400)
    {
        b=1.50*a;
    }
    else if (a>=400 && a<600)
    {
        b=1.80*a;
    }
    else
    {
        b=2.00*a;
    }
    if (b<=400)
    {
        sc=100;
        t=sc+b;
    }
    else 
    {
        sc=0.15*b;
        t=sc+b;
    }
    printf("%.2f",t);
}