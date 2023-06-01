#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int s=0;
    for (int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            s=s+i;
        }
    }
    if (s>=a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}