#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int n,c=0,i,j=0;
    scanf("%d",&n);
    int d=0,k=0;
    for(i=1;i<=n;i++)
    {
       if(n%i==0 && n%(n/i)==0){
           if(prime(i) && prime(n/i)){
               printf("%d %d",i,n/i);
               k++;
               break;
           }
       }
    }
    if(k==0){
        printf("-1");
    }
}