#include <stdio.h>

int main()
{
  int t_start, t_end, total_time;

  scanf("%d %d", &t_start, &t_end);

  if (t_start > t_end)
  {
    total_time = (24 - t_start) + t_end;
  }
  else if (t_start < t_end) {
    total_time = t_end - t_start;
  }
  else {
    total_time = 24;
  }

  printf("O JOGO DUROU %d HORA(S)\n", total_time);

  return 0;
}
