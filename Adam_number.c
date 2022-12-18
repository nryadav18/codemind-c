#include<stdio.h>
int funa(int a)
{
    int b;
    b=(a*a);
    return(b);
}
int funb(int a)
{
    int b=a;
    int r,s=0;
    while (b!=0)
    {
        r=b%10;
        s=s*10+r;
        b=b/10;
    }
    int sq=(s*s);
    int r1,s1=0;
    while(sq!=0)
    {
        r1=sq%10;
        s1=s1*10+r1;
        sq=sq/10;
    }
    return(s1);
}
int main ()
{
    int a;
    scanf("%d",&a);
    int x,y;
    x=funa(a);
    y=funb(a);
    if (x==y) printf("True");
    else printf("False");
}