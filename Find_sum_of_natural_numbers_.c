#include<stdio.h>
int main()
{
    int s=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("%d",s);
}