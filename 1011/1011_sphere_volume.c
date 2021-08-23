#include <stdio.h>
// invoke the compiler with -lm to link the math library to our binary
#include <math.h>

int main()
{
  // it's a best practice to always initialize a variable with a default value
  double sphere_radius = 0.0;
  double pi = 3.14159;

  scanf("%lf", &sphere_radius);

  // pow is a function part of the math.h library. ]
  // pow returns the value of x (1st arg) raised to power of y (2nd arg)
  double sphere_volume = (4/3.0) * pi * pow(sphere_radius, 3);

  printf("VOLUME = %.3lf\n", sphere_volume);

  return 0;
}
