#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h=n/3600;
    int m=(n-(3600*h))/60;
    int s=(n-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
}
