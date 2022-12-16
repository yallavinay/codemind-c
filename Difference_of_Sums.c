#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    for(int i=1;i<=n;i++)
    {
       k=k+i;
    }
    int l=pow(k,2);
   int d=l-s;
   printf("%d",d);
}