#include<stdio.h>
int main ()
{
    float b,h,d,gr,p;
    scanf("%f%f%f",&b,&h,&d);
    p=0.12*b;
    gr=b+p+h+d;
    printf("%.2f
%.2f",p,gr);
}