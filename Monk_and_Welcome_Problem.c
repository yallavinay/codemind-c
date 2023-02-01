#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a1[n],a2[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
             sum=a1[i]+a2[i];
             printf("%d ",sum);
            }
        }
        sum=0;
    }
    
}