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
  else if(b>a && b>c)
  *large=b;
  else if(c>b && c>a)
  *large=c;
  printf("Largest number: %d\n",*large); //pass by reference
}
int main()
{
 
  int m1,n1,o1,q;
  input(&m1,&n1,&o1);
  cmp(m1,n1,o1,&q); 
}
