#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d",b+c);
    }
    else if(a>c && b>c)
    {
        printf("%d",a+b);
    }
    else
    {
        printf("%d",c+a);
    }
}