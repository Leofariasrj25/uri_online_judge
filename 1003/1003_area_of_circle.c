
/*
 * INPUT: a decimal number the problem expects to be treated as a Double, this will be the value for R
 * OUTPUT: the area of a circle calculated by A = n * (R * R), the result should be displayed with
 * a decimal precision of four digits.
 *
 */

// always including the library or otherwise we won't be able to invoke scanf
#include <stdio.h>

// the main method that will run our code
int main()
{
  // n holds the pi number we will use in this exercise
  // the problem expect the decimal numbers to be treated as double
  double n = 3.14159;
  double R, circle_area;

  // %lf is how we tell we want to read a double, without l it'll treat the number as a float
  scanf("%lf", &R);

  circle_area = n * (R * R);

  // .4lf specifies we want the decimal part with 4 digits of precision
  // \n tells to jump to the next line. the exercise will give an error if it's not supplied.
  printf("A=%.4lf\n", circle_area);

  return 0;
}
