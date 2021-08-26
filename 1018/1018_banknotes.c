#include <stdio.h>

int main()
{
  int cash = 0;
  int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
  int banknotes_used[7];

  scanf("%d", &cash);
  printf("%d\n", cash);

  for(int i = 0; i < 7; i++)
  {
    banknotes_used[i] = 0; // ensuring the array has default values

    int notes_used = cash / banknotes[i];
    
    if (notes_used > 0)
    {
      banknotes_used[i] = notes_used;
      cash = cash % banknotes[i];
    }
  }

  // printing
  
  for(int j = 0; j < 7; j++)
  {
    printf("%d nota(s) de R$ %d,00\n", banknotes_used[j], banknotes[j]);
  }

  return 0;
}
