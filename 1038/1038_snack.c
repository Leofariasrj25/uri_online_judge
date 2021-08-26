#include <stdio.h>

int main()
{
  int p_code, p_quantity;
  double total;

  scanf("%d %d", &p_code, &p_quantity);

  switch(p_code)
  {
    // hot-dog
    case 1:
      total = 4.00 * p_quantity;
      break;

    // X-salad
    case 2:
      total = 4.50 * p_quantity;
      break;

    // X-Bacon
    case 3:
      total = 5.00 * p_quantity;
      break;

    // simple toast
    case 4:
      total = 2.00 * p_quantity;
      break;

    // soda
    case 5:
      total = 1.50 * p_quantity;
      break;

    default:
      printf("Invalid product code\n");
  }

  printf("Total: R$ %.2lf\n", total);
  
  return 0;
}
