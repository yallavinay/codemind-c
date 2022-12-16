#include<stdio.h>
int main()
{
    int l,u,r,q,s,n,i;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        n=i;
        q=n;
        s=0;
        while(n!=0)
        {
            r=n%10;
            s=s*10+r;
            n/=10;
        }
        if(q==s)
        {
            printf("%d ",i);
        }
        
    }
}