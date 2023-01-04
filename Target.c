#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a<10 || b<10 || c<10 || d<10)
    printf("NO");
    else
    printf("YES");
}