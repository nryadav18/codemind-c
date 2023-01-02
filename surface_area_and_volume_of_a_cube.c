#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int s,v;
    s=6*a*a;
    v=pow(a,3);
    printf("Surface area = %d and Volume = %d",s,v);
}