/*
 *program to print the following pattern based on an input
 *          *
 *          **
 *          ***
 *          ****
 *          .
 *          .
 *          .
 */

#include<stdio.h>
void main()
{
  unsigned int n;
  printf("Enter a positive integer  :  ");
  scanf("%d", &n);
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++)
      printf("* ");
    printf("\n");
  }
}