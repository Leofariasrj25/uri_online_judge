// will receive three numbers representing worker id, hours worked and hourly wage
// calculate how much he will receive at the of the month
// display his number and the corresponding salary

#include <stdio.h>

int main(){
  
  int worker_id, hours_worked;
  float hourly_pay, salary;
  
  scanf("%d", &worker_id);
  scanf("%d", &hours_worked);
  scanf("%f", &hourly_pay);

  salary = hours_worked * hourly_pay;

  printf("NUMBER = %d\n", worker_id);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}
