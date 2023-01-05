// plindrome
#include<stdio.h>
int palindrome(int n)
{
    int s=0,q,r,rem;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n)
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
    int n,i=1,count=0,k;
    scanf("%d",&n);
    while(n>0)
    {
        if(palindrome(n+i) && palindrome(n-i))
        {
            printf("%d %d",n-i,n+i);
            break;
        }
        else if(palindrome(n+i))
        {
            printf("%d",n+i);
            break;
        }
         else if(palindrome(n-i))
        {
            printf("%d",n-i);
            break;
        }
        i++;
    }
}