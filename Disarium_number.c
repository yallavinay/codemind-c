#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,q,r,tc;
    scanf("%d",&n);
    tc=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+pow(r,tc);
        q/=10;
        tc--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}