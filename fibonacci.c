#include<stdio.h>
int main()
{
    int n,c,a,b;
    scanf("%d",&n);
    a=0;
    b=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}