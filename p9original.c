#include<stdio.h>

void input_two_string(char *a,char *b)
   { 
     printf("enter the words\n");
     scanf("%s %s",a,b);
   }
int strcmp(char *a, char *b)
{
  int c=0;
  while((*a) && *a==*b)//'\0'->0-->
  {
    a++;//hello
    b++; //hell
  }
  c=*a-*b;
  return c;//c=111
}
void output(char *a, char *b, int result)
{
  if(result>0)
  printf("%s is greater than %s",a,b);
  else if(result<0)
  printf("%s is greater than %s",b,a);
  else
  printf("%s is same as %s",a,b);
}
int main()
{
  char c[20],d[20];
  input_two_string(c,d);
  int l=strcmp(c,d);
  output(c,d,l);
}