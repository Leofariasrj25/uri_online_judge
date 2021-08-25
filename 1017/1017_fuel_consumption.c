#include <stdio.h>

int main()
{
  // this is how much fuel we burn per km
  double average_fuel_spent = 12.0;
  int time_spent, average_speed;

  scanf("%d\n%d", &time_spent, &average_speed);

  // first we need to know how far the car went
  int distance = time_spent * average_speed;
  // then we divide the total distance by how much fuel we burn per km
  double fuel_spent = distance / average_fuel_spent;

  printf("%.3lf\n", fuel_spent);

  return 0;
}
