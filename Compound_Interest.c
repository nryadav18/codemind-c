#include<stdio.h>
#include<math.h>
int main ()
{
    float p,t,r;
    scanf("%f%f%f",&p,&r,&t);
    float ci;
    ci=p*pow((1+(r/100)),t)-p;
    printf("%.2f",ci);
}