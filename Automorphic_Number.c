#include<stdio.h>
int main()
{
    int n,sq,s;
    scanf("%d",&n);
    sq=(n*n);
    while(n!=0)
    {
        if(n%10!=sq%10)
        {
            s=1;
            break;
        }
        n/=10;
        sq/=10;
    }
    if(s==1)
    {
        printf("Not an Automorphic Number");
    }
    else
    {
        printf("Automorphic Number");
    }
}