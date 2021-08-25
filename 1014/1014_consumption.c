#include <stdio.h>

int main()
{
  // always a good practice to initialize your variables
  int distance_traveled = 0;
  double fuel_spent = 0.0;

  scanf("%d\n%lf", &distance_traveled, &fuel_spent);

  double average_consumption = distance_traveled / fuel_spent;

  printf("%.3lf km/l\n", average_consumption);

  return 0;
}
