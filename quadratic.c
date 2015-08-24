#include<stdio.h>
#include<math.h>
main()
{
  float a, b, c, disc, r1, r2, real, img;
  printf("\n############################################################\n");
  printf("Enter the coefficients of a quadratic equation of form ax^2 + bx + c \n");
  printf("a = ");
  scanf("%f", &a);  
  printf("b = ");
  scanf("%f", &b);  
  printf("c = ");
  scanf("%f", &c);  
  disc = b*b-4*a*c;
  int flag = disc;
  if(disc>0)
    flag=1;
  switch(flag)
  {
    case 0 : r1 = -b/(2*a);
             printf("The equation has only one root, x = %f", r1);
             break;
    case 1 : r1 = ((-b)+(sqrt(disc)))/(2*a);
             r2 = ((-b)-(sqrt(disc)))/(2*a);
             printf("\n%f %f %f %f %f", a, b, c, disc, sqrt(disc));   
             printf("The roots of the quadratic equation are \nx1 = %f \nx2 = %f", r1, r2);
             break;
    default : real = -b/(2*a);
              img = sqrt(-disc)/(2*a);
              printf("The equation has complex roots \nx1 = %f+%fi \nx2 = %f-%fi", real, img, real, img);
  }
  printf("\n############################################################\n");
}