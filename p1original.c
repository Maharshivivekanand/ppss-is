/*Add Two Numbers*/
#include<stdio.h>
//function declaration

void add()
{
  int a,b;
  float sum;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("addition of %d + %d is= %f\n",a,b,sum);
  

}

int main()
{
  add();//function call
  return (0);
}
