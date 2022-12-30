#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d%d%d",&a,&b,&c);
    n=b*c;
    int k = a/n;
    if(a%n)
    {
        k++;
    }
    printf("%d",k);
}