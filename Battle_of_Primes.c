#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i=1,x;
    scanf("%d%d",&a,&b);
    while(i>0)
    {
        x=a+b+i;
        if(prime(x))
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}