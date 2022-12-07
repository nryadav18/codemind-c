#include<stdio.h>
int main ()
{
    int days;
    scanf("%d",&days);
    int yr,we,rw;
    yr=days/365;
    rw=days-(yr*365);
    we=rw/7;
    printf("%d
%d",yr,we);
}