#include<stdio.h>
int hn(int num)
{    
    int rem=0,sum=0;
    while(num>0)
    {    
        rem=num%10;    
        sum=sum+(rem*rem);    
        num=num/10;    
    }    
    return sum;    
}    
int main()    
{    
    int num;
    scanf("%d",&num);
    int result=num;    
    while(result!=1 && result!=4)
    {    
        result=hn(result);    
    }    
    if(result==1) printf("True");
    else if(result==4) printf("False");
} 