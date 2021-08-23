#include <stdio.h>

int main()
{
  char nome[20];
  double fixed_salary, sales_made, final_salary;

  scanf("%s", nome); 
  scanf("%lf", &fixed_salary);
  scanf("%lf", &sales_made);

  final_salary = fixed_salary + (sales_made * (15/100.0));

  printf("TOTAL = R$ %.2lf\n", final_salary);

  return 0;
}

