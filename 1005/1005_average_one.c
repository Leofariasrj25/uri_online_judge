/* INPUT: two doubles representing a student's grade in d.d format.  
 * OUTPUT: the average of those two grades. the first has a 3.5 weight and the second a 7.5 weight
 *         the result should have 5 digits of precision.
 */

#include <stdio.h>

int main()
{
  // declaring our variables
  double grade_a, grade_b, average;
  // declaring the weights here because if maybe in the future we want to change them
  // we change it in one place only.
  double grade_a_weight = 3.5;
  double grade_b_weight = 7.5;

  // specifying the l in front of f to say we're scanning a double.
  scanf("%lf", &grade_a);
  scanf("%lf", &grade_b);

  // the weighted average is the sum of all items multiplied by their respective weights 
  // divided by the sum of all weights
  // we are using parenthesis to enforce the order of operations
  average = ((grade_a * grade_a_weight) + (grade_b * grade_b_weight)) / (grade_a_weight + grade_b_weight);

  printf("MEDIA = %.5lf\n", average);

  return 0;
}
