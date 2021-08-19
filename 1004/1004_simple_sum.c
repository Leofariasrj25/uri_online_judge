/*
 * INPUT: two integers
 * OUTPUT: the word SOMA = 'result of the sum here' 
 */

#include <stdio.h>

int main() 
{
  // declaring our variables
  int num_a, num_b, result;

  scanf("%d", &num_a);
  scanf("%d", &num_b);

  result = num_a + num_b;

  printf("SOMA = %d\n", result);

  return 0;
}
