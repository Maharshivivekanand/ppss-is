#include <math.h>
#include <stdio.h>

float input()
{
  float n;
  printf("Enter the number to find the square root:\n");
  scanf("%f",&n);
  return n;
  
}
float sqr_t(float n)
{
  float xn=n/2;
  float xnext;
  xnext=0.5*(xn+(n/xn));
  while (fabs(xn-xnext)>0.00001)
{
  xn=xnext;
  xnext=0.5*(xn+(n/xn));
  
}
return xnext;

void output(float n,float sqrt_result)
{
  printf("Square root of %f is %f\n",n,sqrt_result);
}

int main()
{
  float x,result;
  x=input();
  result=sqr_t(x);
  output(x,result);
  return 0;
}