/*
 *program to find result of 1^3 + 2^3 + . . . . + n^3         
 */

#include<stdio.h>
void main()
{
  unsigned int n, sum=0;
  printf("Enter a positive integer  :  ");
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
    sum += i*i*i;
  printf("Sum = %d \n", sum);
}