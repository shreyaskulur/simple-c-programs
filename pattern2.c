/*
 *program to print the following pattern based on an input
 *          1
 *          2 2
 *          3 3 3
 *          4 4 4 4
 *          .
 *          .
 *          .
 */

#include<stdio.h>
void main()
{
  unsigned int n;
  printf("Enter a positive integer less than 10  :  ");
  scanf("%d", &n);
  if( n<10 )
  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<i; j++)
      printf("%d ", i);
    printf("\n");
  }
}