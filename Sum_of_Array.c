#include<stdio.h>
int main()
{
   int n,i;
  scanf("%d",&n);
  int a[n],s=0;
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      s=s+a[i];
  }
  printf("%d",s);
}