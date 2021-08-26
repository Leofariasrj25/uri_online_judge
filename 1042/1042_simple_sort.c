#include <stdio.h>

int main()
{
  int a, b, c;
  int smaller = 0;
  int middle = 0;
  int biggest = 0;
  scanf("%d %d %d", &a, &b, &c);

  smaller = a;
  middle = b;
  biggest = c;

  if  (a > b && a > c)
  {
    biggest = a;
    smaller = b;
    middle = c;

    if (b > c)
    {
     smaller = c;
     middle = b;
    }
  }
  else if(b > a && b > c)
  {
    biggest = b;
    middle = c;
   
    if (a > c)
    {
      middle = a;
      smaller = c;
    }
  }
  else if(c > a && c > b)
  {
    if (a > b)
    {
      middle = a;
      smaller = b;
    }
  }

  printf("%d\n", smaller);
  printf("%d\n", middle);
  printf("%d\n\n", biggest);

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);

  return 0;
}

