#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    int c=0;
    int e=0;
    for(int k=0;k<n;k++)
    {
        if(a[k]%2==0)
        {
            e++;
        }
    }
    for(i=0;i<n;i++)
    {
        if( i%2==0 && a[i]%2==0 )
        {
            c++;
        }
    }
    if(c==e)
    {
        printf("True");
    }
    else
    {
        printf("False");
}
}
