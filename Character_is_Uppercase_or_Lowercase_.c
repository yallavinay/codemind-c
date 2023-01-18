#include<stdio.h>
int alpha(char c)
{
    if(c>='A' && c<='Z')
    {
        return 1;
    }
    else if(c>='a' && c<='z')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    int x=alpha(c);
    if(x==1)
    {
        printf("uppercase alphabet");
    }
    else if(x==2)
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}