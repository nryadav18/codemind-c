#include<stdio.h>
float fun(int a)
{
    float b;
    b=2.54*a;
    return(b);
}
int main ()
{
    int a;
    scanf("%d",&a);
    float x;
    x=fun(a);
    printf("%.2f",x);
}