#include<stdio.h>
int main()
{
    int l,u,i,j,count;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
           
        }
         if(count==2)
            {
                printf("%d
",i);
            }
    }
}