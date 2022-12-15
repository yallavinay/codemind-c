#include<stdio.h>
int main()
{
   int n,i,c=0;
  scanf("%d",&n);
  int a[n];
  int s=0;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      s=s+a[i];
  }
  int avg=s/n;
  for(i=0;i<n;i++)
  {
    if(a[i]==avg)
    {
        c++;
    }
  }
  if(c>=1)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
 
}
   