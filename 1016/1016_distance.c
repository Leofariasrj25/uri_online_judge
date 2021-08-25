#include <stdio.h>

int main()
{
  int x_vel = 60; // km/h
  int y_vel = 90; // km/h

  double y_lead = (y_vel / 60.0) - (x_vel / 60.0);

  int distance = 0;
  scanf("%d", &distance);

  int minutes = distance * (1 / y_lead);

 printf("%d minutos\n", minutes); 

 return 0;
}
