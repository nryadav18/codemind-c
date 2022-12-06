#include<stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    int r=0,s=0,c=0;
    while (num)
    {
        r=(r*10)+(num%10);
        num/=10;
    }
    while (r)
    {
        if (r%10==6 && c==0)
        {
            s=(s*10)+9;
            c++;
        }
        else
        {
            s=(s*10)+(r%10);
        }
        r/=10;
    }
    printf("%d",s);
}