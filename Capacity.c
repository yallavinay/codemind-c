#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int c=2*s*t*b*512;
    int tc=c/1024;
    printf("%dkb",tc);
}