// scan the values for a, b, c
// round the numbers so they only have one digit in the decimal part
// do the calculation for the weighted average
// display the result

#include <stdio.h>

int main()
{
  float grade_a, grade_b, grade_c;
  int weight_a = 2;
  int weight_b = 3;
  int weight_c = 5;

  // reading the numbers
  scanf("%f", &grade_a);
  scanf("%f", &grade_b);
  scanf("%f", &grade_c);

  float grade_sum = (grade_a *  weight_a) + (grade_b * weight_b) + (grade_c * weight_c);
  float average_sum = weight_a + weight_b + weight_c;
  float w_average = grade_sum / average_sum;

  printf("MEDIA = %.1f\n", w_average); 
}
