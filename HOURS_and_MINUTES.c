#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int b,c;
    b=a/60;
    c=a%60;
    printf("%d Hour(s) %d Minute(s)",b,c);
}