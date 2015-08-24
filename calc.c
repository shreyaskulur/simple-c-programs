#include <stdio.h>
void main()
{
  int a, b, check=1;
  char operator;
  float ans;
  printf("Enter a simple expression\t");
  scanf("%d%c%d", &a, &operator, &b);
  
  if( operator=='+')
    ans=a+b;
  else if( operator=='-')
    ans=a-b;
  else if( operator=='*')
    ans=a*b;
  else if( operator=='/' && b!=0)
    ans=a/b;
  else
    check=0;

  if(check)
    printf("%d%c%d=%f \n", a, operator, b, ans);
  else
    printf("Invalid Expression \n");
}