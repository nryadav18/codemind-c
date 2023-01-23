#include<stdio.h>
int main()
{
    int t,m,n,fl,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        fl=0;
        for(i=0;i<=m;i++)
        {
            long int temp=(long int)i*i;
            if(temp%m==n)
            {
                printf("%d
",i);
                fl=1;
                break;
            }
        }
        if(fl!=1)
            printf("-1
");
    }
}
