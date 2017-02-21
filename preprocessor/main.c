#include <stdio.h>
#include "function.h"
#define PI 3.14159
#define ADD(a, b) (a + b)

void main()
{
  printf("The total is %d\n", add_vals(1, 2, 3));
  float rad = 3;
  float circ = rad * 2 * PI;
  float area = rad * rad * PI;
  printf("The circumference of a circle radius %f is %f\n", rad, circ);
  printf("The area of a circle radius %f is %f\n", rad, area);
  printf("The sum of %d and %d is %d\n", 5, 2, ADD(5,2));
  printf("The sum of %d and %d is %d\n", 3, 7, ADD(3, 7));
}
