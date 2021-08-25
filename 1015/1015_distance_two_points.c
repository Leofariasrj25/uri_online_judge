#include <stdio.h>
#include <math.h>

int main()
{
  double x1, y1, x2, y2;

  scanf("%lf %lf", &x1, &y1);
  scanf("%lf %lf", &x2, &y2);

  double first_binomial = pow(x2, 2) - (2 * x1 * x2) + pow(x1, 2);
  double second_binomial = pow(y2, 2) - (2 * y2 * y1) + pow(y1, 2);

  double difference_points = sqrt(first_binomial + second_binomial);

  printf("%.4lf\n", difference_points);
}
