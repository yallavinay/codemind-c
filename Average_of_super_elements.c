#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,d=0,c;
    float v,sum;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    a[j]=1000;
                    c++;
                }
            }
        }
        if(c==a[i]&& a[i]!=1000)
        {
            sum+=a[i];
            d++;
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
    v=sum/d;
    printf("%.2f",v);
    }
}