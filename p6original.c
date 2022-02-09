#include<stdio.h>

int main()
{
  int i,n,sum=0;
  printf("enter the number\n");
  scanf("%d",&n);
  
  for(i=0; i<=n; i++)
 {
    sum=sum+i;
 }
 printf("sum of =%d\n",sum);
  return 0;
}