#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i])  ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",fact(arr[i]));
    }
}