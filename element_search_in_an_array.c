#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i,a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if (b==a[i])
        {
            printf("True");
            return(0);
        }
    }
    printf("False");
}