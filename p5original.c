#include <stdio.h>

void input(int *a, int *b, int *c)
{
  printf("Enter numbers to compare\n");
  scanf("%d%d%d",a,b,c);
}


void cmp(int a, int b, int c, int *large)
{
  if(a>b && a>c)
  *large=a;
  else if(b>c)
  *large=b;
  else
  *large=c; 
  }
void output(int a,int b,int c,int large)
{
  printf("Largest number: %d\n",large);
}
int main()
{
 
  int m1,n1,o1,large;
  input(&m1,&n1,&o1);
  cmp(m1,n1,o1,&large);
  output(m1,n1,o1,large);
  return 0;
}
