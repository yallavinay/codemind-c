#include<stdio.h>
void table()
{
    int n,r,p,i;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
           p=n*i;
           printf("%d x %d = %d
",n,i,p);
        }
    }
}
int main()
{
    table();
}
