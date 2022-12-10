#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=11)
    {
        printf("%d",21-(a+b));
    }
    else
    {
        printf("%d",-1);
    }
}
