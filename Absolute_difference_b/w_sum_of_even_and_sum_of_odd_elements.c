#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    if(even>odd)
    {
        printf("%d",even-odd);
    }
    else
    {
        printf("%d",odd-even);
    }
}