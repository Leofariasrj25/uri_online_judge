/* Then if B is greater than C and D is greater than A and if the sum of C and D 
 * is greater than the sum of A and B and if C and D were positives values 
 * and if A is even
 */

#include <stdio.h>

int main()
{
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (b > c && d > a)
  {
    
    if ((c + d) > (a + b))
    {
     
      if (c > 0 && d > 0)
      {
        
        if (a % 2 == 0)
        {
          printf("Valores aceitos\n");
          return 0;
        }
      }
    }
  }

  // if you reach here then the above is false
  printf("Valores nao aceitos\n");
  return 0;
}
