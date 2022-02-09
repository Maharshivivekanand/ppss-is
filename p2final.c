#include <stdio.h>

int input()
{
  int vivek;
  printf("enter a number\n");
 
  scanf("%d",&vivek);
  return vivek;
}

int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;

}
void output(int a,int b,int sum)
{
  printf("addding two numbers %d + %d is= %d\n",a,b,sum);

}

int main()
{
  int g,h,sum;
  g=input();
  h=input();
  sum=add(g,h);
  output(g,h,sum);
  return 0;
}