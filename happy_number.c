// happy number
#include<stdio.h>
int main()
{
    int n,m,sum=0,d;
    scanf("%d",&n);
    m=n;
    while(m>=10)
    {
        while(m!=0)
        {
            d=m%10;
            sum=sum+(d*d);
            m=m/10;
        }
        m=sum;
        sum=0;
    }
    if(m==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}