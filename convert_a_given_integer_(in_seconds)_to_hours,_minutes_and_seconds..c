#include<stdio.h>
int main ()
{
    int s;
    scanf("%d",&s);
    int h,m,min,sec;
    h=s/3600;
    m=s-(h*3600);
    min=m/60;
    sec=m%60;
    printf("H:M:S-%d:%d:%d",h,min,sec);
}