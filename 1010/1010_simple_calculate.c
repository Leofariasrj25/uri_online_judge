#include <stdio.h>

int main()
{
  int p_code, p_quantity;
  double p_price = 0.0, value_to_pay = 0.0;

  for(int i = 0; i < 2; i++)
  {
    scanf("%d %d %lf", &p_code, &p_quantity, &p_price);

    value_to_pay += p_price * p_quantity;
  }

  printf("VALOR A PAGAR: R$ %.2lf\n", value_to_pay);

  return 0;
}
