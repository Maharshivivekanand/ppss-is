#include<stdio.h>

void input(int a,int b)
{
  int shri;
  printf("enter a value\n");
  scanf("%d", &shri);
}

void add(int a,int b,sum)
{
  int *sum;
  *sum=a+b;
  return *sum;

}
void output(int a,int b,int sum)
{
  printf("addition of %d + %d is=%d\n",a,b,*sum);

}
 void input()
 {
   int g,h,sum;
   g=input(int a,int b);
   h=input(int a,int b);
   sum=add(g,h);
   output=(g,h,sum);
 }