#include<stdio.h>
int main()
{
    float pf,gs,b,d,h;
    scanf("%f%f%f",&b,&d,&h);
    pf=(b)*0.12;
    gs=pf+b+d+h;
    printf("%.2f
%.2f",pf,gs);
}