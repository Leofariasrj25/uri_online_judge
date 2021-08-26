#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  double delta = pow(b, 2) - 4 * a * c;
  
  if (a != 0 && delta >= 0) // if a is 0 then we will try to divide by zero, a no!-no!
  {
    double x1 = ((b * -1) + sqrt(delta)) / (2.0 * a);
    double x2 = ((b * -1) - sqrt(delta)) / (2.0 * a);

    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
  }
  else 
  {
    printf("Impossivel calcular\n");
  }

  return 0;
}
