#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    printf("lowercase alphabet");
    else if (ch>='A' && ch<='Z')
    printf("uppercase alphabet");
    else
    printf("not an alphabet");
}