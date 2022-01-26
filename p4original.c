#include<stdio.h>

int input()
{ 
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{ 
  if(a>b && a>c)
       return a;
  else if(b>c)
        return b;
    else
      return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest among all is %d\n",cmp(a,b,c));
}

int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
  }