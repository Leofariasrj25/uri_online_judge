// read four values. in what format? 
// assign those values to their respective variables
// calculate the difference of products of ab from the product of bc
// display the result

#include <stdio.h>

int main()
{
  int a, b, c, d, difference;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  difference = (a * b) - (c * d);

  printf("DIFERENCA = %d\n", difference);

  return 0;
}

