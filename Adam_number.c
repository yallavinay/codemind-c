#include<stdio.h>
int main()
{
    int n,sum,m,x,temp,semp,rev=0;
    scanf("%d",&n);
    m=n*n;
    while(n>0)
    {
        temp=n%10;
        sum=(sum*10)+temp;
        n=n/10;
    }
    x=sum*sum;
    while(x>0)
    {
        semp=x%10;
        rev=(rev*10)+semp;
        x=x/10;
    }
    if(m==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}