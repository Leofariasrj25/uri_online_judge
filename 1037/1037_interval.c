#include <stdio.h>

int main()
{
  double value = 0.0;
  char *interval = "Intervalo";
  
  scanf("%lf", &value);

  if (value >=0 && value <= 100.0)
  {
    if (value >= 0 && value <= 25)
    {
      printf("%s [0,25]\n", interval);
    }
    else if(value > 25 && value <= 50)
    {
      printf("%s (25,50]\n", interval);
    }
    else if(value > 50 && value <= 75)
    {
      printf("%s (50,75]\n", interval);
    }
    else
    {
      printf("%s (75,100]\n", interval);
    }
  }
  else
  {
    printf("Fora de intervalo\n"); 
  }
  
  return 0;
}
