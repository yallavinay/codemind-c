#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for( i=1;i<=m;i++)
    {
        int n,j,flag=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            if(n==(j*j))
            {
                printf("True
");
                flag=1;
                break;
            }
          
        }
        if(flag==0)
        {
            printf("False
");
        }
    }
}