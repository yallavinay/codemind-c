// plindrome
#include<stdio.h>
int main()
{
    int n,s=0,q,r,rem;
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
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}