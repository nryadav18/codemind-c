#include<stdio.h>
const char* fun(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            c++;
        }
    }
    if (c==2) return("prime");
    else return("not a prime");
}
int main ()
{
    int a;
    scanf("%d",&a);
    printf("%s",fun(a));
}