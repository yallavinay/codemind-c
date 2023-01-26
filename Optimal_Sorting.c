#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int  i,j,n,n1[200000],d=0,a;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&n1[i]);
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if(n1[i]>n1[j])
                {
                    a=n1[i];
                    n1[i]=n1[j];
                    n1[j]=a;
                    d++;
                }
            }
        }
        if(d==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",(n1[n-1])-n1[0]);
        }
        printf("
");
    }
}