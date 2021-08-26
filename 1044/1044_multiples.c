#include <stdio.h>

int main()
{
  int x, y;

  scanf("%d %d", &x, &y);

  // we say y is a multiple of x if there is a a natural number k that multiplies x to result y
  // which results in k = y / x
  
  if (y % x == 0 || x % y == 0)
  {
    printf("Sao Multiplos\n");
  }
  else
  {
    printf("Nao sao Multiplos\n");
  }
}
