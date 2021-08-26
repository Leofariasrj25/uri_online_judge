#include <stdio.h>

int main()
{
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  if ((a + b) > c)
  {
    if ((a + c) > b)
    {
      if ((b + c) > a)
      {
        double triangle_perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", triangle_perimeter);
        return 0;
      }
    }
  }

  // if you reach here then it isn't a triangle
  // calculating the trapezium's area
  
  double trapezium_area = ((a + b) * c) / 2;
  printf("Area = %.1lf\n", trapezium_area);

  return 0;
}
