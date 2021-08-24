#include <stdio.h>

int greatest(int a, int b)
{
  int abs = a - b;

  if (abs < 0)
  {
    abs *= -1;
  }

  return (a + b + abs) / 2;
}


int main()
{
  int num_a, num_b, num_c, bigger;

  scanf("%d %d %d", &num_a, &num_b, &num_c);

  bigger = greatest(num_a, num_b);
  bigger = greatest(bigger, num_c);

  printf("%d eh o maior\n", bigger);

  return 0;
}
